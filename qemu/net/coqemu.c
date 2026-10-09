
#include "qemu/osdep.h"
#include "net/net.h"
#include "net/clients.h"
#include "net/coqemu_helper.h"
#include "qemu/iov.h"
#include "qapi/error.h"
#include "qemu/timer.h"
#include "sysemu/runstate.h"

#include "qemu/node-config.h"
#include "hw/net/e1000_common.h"

#include "sysemu/sysemu.h"
//FUSION
#include "sysemu/cpus.h"

// #include "qemu/main-loop.h"
// static QEMUBH *sync_bh;

#include "qemu/osdep.h"
#include "qemu/timer.h"
#include "qemu/main-loop.h"
#include "sysemu/runstate.h"
#include "sysemu/cpus.h"


#define PRINTSTIMES 1000000
#define DEBUG 0
#define MAX_PACKET_SIZE 65536

static Notifier coqemu_exit_notifier;
static QEMUBH *sync_bh;
static QEMUBH *sync_bh_2;
static QEMUTimer *sync_timer;
static QEMUTimer *packet_rcv_timer;
// static long int temp_counter=0;

static bool sync_in_progress;
static bool test_synch = false;
static bool test_rx = false;
static int64_t synch_ns =0;
static int64_t rxpakt_ns =0;

static void sync_bh_cb(void *opaque)
{

    // Safely pause the VM from the main loop
    vm_stop(RUN_STATE_PAUSED);


    step_hla();

    vm_start();

    sync_in_progress = false;
    // Rearm the timer for the next interval
    int64_t now_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
    timer_mod(sync_timer, now_ns + synch_ns);
}

static void sync_bh_cb_2(void *opaque)
{

    printf("Telos\n");
    vm_shutdown();
}


static void sync_timer_cb(void *opaque)
{
    if (sync_in_progress) {
        /* Avoid reentrancy if previous cycle hasn�t finished */
        int64_t now_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
        timer_mod(sync_timer, now_ns + synch_ns);
        return;
    }
    sync_in_progress = true;
    qemu_bh_schedule(sync_bh);
}

static void test_synch_fast_cb(void *opaque)
{
    if(test_synch)
    {
        int64_t now_ns_temp = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
        printf("The time for first synch is %ld \n",now_ns_temp);
        test_synch=false;

    }


    timer_free(sync_timer);
    sync_timer = timer_new_ns(QEMU_CLOCK_VIRTUAL, sync_timer_cb, NULL);
    int64_t now_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
    timer_mod(sync_timer, now_ns + synch_ns);
}


static void packet_rcv_timer_cb(void *opaque)
{

    if(!BufferPacketEmpty_hla())
    {
           int64_t now_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
        // Re-arm the timer for the next periodic sync
        timer_mod(packet_rcv_timer, now_ns + rxpakt_ns);
        return;
    }

    NetClientState *backend, *nic;

    struct iovec iov;

    /* find the user-net backend by its id "net0" */
    backend = qemu_find_netdev("net0");  /* lookup by -netdev user,id=net0 :contentReference[oaicite:0]{index=0} */
    if (!backend) {
        printf("inject_packet_cb: cannot find netdev 'net0'");
        return;
    }

    /* its peer is the guest NIC side */
    nic = backend->peer;
    if (!nic) {
        printf("inject_packet_cb: net0 has no peer NIC");
        return;
    }

    uint8_t *pkt = NULL;

    if(!fill_the_packet(&pkt, &iov.iov_len))
    {
        qemu_bh_schedule(sync_bh_2);
    }

    iov.iov_base = pkt;

    /* inject: sender=backend, target NIC=nic */
    qemu_deliver_packet_iov(backend, 0, &iov, 1, nic);

    clear_the_packet();

    int64_t now_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
    timer_mod(packet_rcv_timer, now_ns + rxpakt_ns);
}



static void test_rx_fast_cb(void *opaque)
{

    if(test_rx )
    {
        int64_t now_ns_temp = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
        printf("The time for first synch is %ld \n",now_ns_temp);
        test_rx =false;
    }

    timer_free(packet_rcv_timer);
    packet_rcv_timer = timer_new_ns(QEMU_CLOCK_VIRTUAL, packet_rcv_timer_cb, NULL);
    int64_t now_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
    timer_mod(packet_rcv_timer, now_ns + rxpakt_ns);
}


static void init_synch_timer(void)
{
    sync_bh = qemu_bh_new(sync_bh_cb, NULL);
    sync_in_progress = false;
    synch_ns = qemu_synch_time;//*1000;

    if(qemu_faststart)
    {
        sync_timer = timer_new_ns(QEMU_CLOCK_VIRTUAL, test_synch_fast_cb, NULL);
        test_synch = true;
        int64_t first_init = qemu_fastsecs*1000000000LL;
        int64_t now_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
        first_init +=now_ns;
        timer_mod(sync_timer, first_init);
        printf("synch now_ns = %" PRId64 "\n", now_ns);
    }
    else
    {
        sync_timer = timer_new_ns(QEMU_CLOCK_VIRTUAL, sync_timer_cb, NULL);
        int64_t now_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
        timer_mod(sync_timer, now_ns + synch_ns);
        printf("synch now_ns = %" PRId64 "\n", now_ns);
    }
}

static void init_packet_rcv_timer(void)
{
    rxpakt_ns = qemu_rx_packet_time;//*1000;
    sync_bh_2 = qemu_bh_new(sync_bh_cb_2, NULL);

    if(qemu_faststart)
    {
        packet_rcv_timer = timer_new_ns(QEMU_CLOCK_VIRTUAL, test_rx_fast_cb, NULL);
        test_rx = true;
        int64_t first_init = qemu_fastsecs*1000000000LL;
        int64_t now_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
        first_init +=now_ns;
        timer_mod(packet_rcv_timer, first_init);
        printf("rcv now_ns = %" PRId64 "\n", now_ns);
    }
    else
    {
        packet_rcv_timer = timer_new_ns(QEMU_CLOCK_VIRTUAL, packet_rcv_timer_cb, NULL);
        int64_t now_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
        timer_mod(packet_rcv_timer, now_ns + rxpakt_ns);
        printf("rcv now_ns = %" PRId64 "\n", now_ns);
    }
}


void init_my_timers(void)
{
    if (qemu_cossim) {
        init_synch_timer();
        init_packet_rcv_timer();
    }
}


static ssize_t nc_sendv_compat(NetClientState *nc, const struct iovec *iov,
                               int iovcnt, unsigned flags)
{
    uint8_t *buf = NULL;
    uint8_t *buffer;
    size_t offset;
    ssize_t ret;

    if (iovcnt == 1) {
        buffer = iov[0].iov_base;
        offset = iov[0].iov_len;
    } else {
        offset = iov_size(iov, iovcnt);
        if (offset > NET_BUFSIZE) {
            return -1;
        }
        buf = g_malloc(offset);
        buffer = buf;
        offset = iov_to_buf(iov, iovcnt, 0, buf, offset);
    }

    if (flags & QEMU_NET_PACKET_FLAG_RAW && nc->info->receive_raw) {
        ret = nc->info->receive_raw(nc, buffer, offset);
    } else {
        ret = nc->info->receive(nc, buffer, offset);
    }

    g_free(buf);
    return ret;
}



ssize_t qemu_send_packet(NetClientState *nc, const uint8_t *buf, int size)
{
//    printf("qemu_send_packet'\n");
    if (qemu_cossim)
    {
        send_packet_hla(buf,size);
        return 0;
    }
    else
    {
        return qemu_send_packet_async(nc, buf, size, NULL);
    }
    return qemu_send_packet_async(nc, buf, size, NULL);
}


ssize_t qemu_sendv_packet_async(NetClientState *sender,
                                const struct iovec *iov, int iovcnt,
                                NetPacketSent *sent_cb)
{
    if (qemu_cossim)
    {
        size_t size = iov_size(iov, iovcnt);

        if (iovcnt == 1) {

            send_packet_hla(iov[0].iov_base, size);

            return size;
        }

        static uint8_t fast_buf[MAX_PACKET_SIZE];

        if (size > MAX_PACKET_SIZE) {
            return size;
        }

        iov_to_buf(iov, iovcnt, 0, fast_buf, size);

        send_packet_hla(fast_buf, size);

        return size;
        /*
        size_t size = iov_size(iov, iovcnt);


        uint8_t *buf = g_malloc(size);


        iov_to_buf(iov, iovcnt, 0, buf, size);

        send_packet_hla(buf, size);


        g_free(buf);

        return size;
        */
    }
    else
    {

            NetQueue *queue;
            size_t size = iov_size(iov, iovcnt);
            int ret;

            if (size > NET_BUFSIZE) {
                return size;
            }

            if (sender->link_down || !sender->peer) {
                return size;
            }

            /* Let filters handle the packet first */
            ret = filter_receive_iov(sender, NET_FILTER_DIRECTION_TX, sender,
                                    QEMU_NET_PACKET_FLAG_NONE, iov, iovcnt, sent_cb);
            if (ret) {
                return ret;
            }

            ret = filter_receive_iov(sender->peer, NET_FILTER_DIRECTION_RX, sender,
                                    QEMU_NET_PACKET_FLAG_NONE, iov, iovcnt, sent_cb);
            if (ret) {
                return ret;
            }

            queue = sender->peer->incoming_queue;

            return qemu_net_queue_send_iov(queue, sender,
                                        QEMU_NET_PACKET_FLAG_NONE,
                                        iov, iovcnt, sent_cb);
    }
}



 ssize_t qemu_deliver_packet_iov(NetClientState *sender,
                                       unsigned flags,
                                       const struct iovec *iov,
                                       int iovcnt,
                                       void *opaque)
{
    MemReentrancyGuard *owned_reentrancy_guard;
    NetClientState *nc = opaque;
    int ret;

    /*
        //FUSION
    //printf("Hello world qemu_deliver_packet_iov\n");

    {
        // 1) compute total packet length
        size_t total_len = iov_size(iov, iovcnt);

        // 2) allocate a flat buffer
        uint8_t *flat = g_try_malloc(total_len);
        if (flat) {
            // 3) copy all iov segments into it
            iov_to_buf(iov, iovcnt, 0, flat, total_len);

            // 4) print using your helper
            print_rcv_raw_packet(flat, total_len);

            // 5) clean up
            g_free(flat);
        } else {
            // allocation failed: as a fallback, print segment-by-segment
            for (int i = 0; i < iovcnt; i++) {
                print_rcv_raw_packet(iov[i].iov_base, iov[i].iov_len);
            }
        }
    }

    */

    if (nc->link_down) {
        return iov_size(iov, iovcnt);
    }

    if (nc->receive_disabled) {
        return 0;
    }

    if (nc->info->type != NET_CLIENT_DRIVER_NIC ||
        qemu_get_nic(nc)->reentrancy_guard->engaged_in_io) {
        owned_reentrancy_guard = NULL;
    } else {
        owned_reentrancy_guard = qemu_get_nic(nc)->reentrancy_guard;
        owned_reentrancy_guard->engaged_in_io = true;
    }

    if (nc->info->receive_iov && !(flags & QEMU_NET_PACKET_FLAG_RAW)) {
        ret = nc->info->receive_iov(nc, iov, iovcnt);
    } else {
        ret = nc_sendv_compat(nc, iov, iovcnt, flags);
    }

    if (owned_reentrancy_guard) {
        owned_reentrancy_guard->engaged_in_io = false;
    }

    if (ret == 0) {
        nc->receive_disabled = 1;
    }

    return ret;
}



static void coqemu_on_exit(Notifier *n, void *opaque)
{
    fprintf(stderr,"Exit function\n");
    exit_function();
}

void register_coqemu_exit_notifier(void)
{
    /* Manually set the callback & opaque pointer */
    coqemu_exit_notifier.notify = coqemu_on_exit;
    /* Hook into QEMU�s exit-notifier list */
    qemu_add_exit_notifier(&coqemu_exit_notifier);
}

void init_coqemu_synch(void)
{
    if (qemu_cossim) {
         printf("Cossim is enabled!\n");
        if (qemu_node_number < 0 || qemu_total_nodes <= 0) {
            printf("Error: NodeNumber or TotalNodes are not defined correctly\n");
            exit(EXIT_FAILURE);
        } else {
            printf("This is node %d of %d\n", qemu_node_number, qemu_total_nodes);
        }

        if (qemu_synch_time <= 0) {
            qemu_synch_time=SYNCH_TIMER_CD;
            printf("SynchTime is not set correctly. We take default value of %d us\n", qemu_synch_time);
        } else {
            printf("SynchTime = %d ns\n", qemu_synch_time);
        }
        if (qemu_rx_packet_time <= 0) {
            qemu_rx_packet_time=RCV_PACKET_TIMER_CD;
            printf("RxPacketTime is not set correctly. We take default value of %d us\n", qemu_rx_packet_time);
        } else {
            printf("RxPacketTime = %d ns\n", qemu_rx_packet_time);
        }
         if (qemu_faststart == 0) {
            printf("Fast Start mode is disabled! Synchronization starts from the beggining\n");
        } else {
            printf("Fast Start mode is enabled!\n");
            if (qemu_fastsecs < 1) {
                qemu_fastsecs=FAST_SECS_DEFAULT;
                printf("Fast Mode Time is not set correctly. We take default value of %d seconds\n", qemu_fastsecs);
            } else {
                printf("Fast Mode Time is set at %d seconds\n", qemu_fastsecs);
            }
        }

        init_HLA(&qemu_node_number,&qemu_total_nodes);
        init_my_timers();
    }

}


