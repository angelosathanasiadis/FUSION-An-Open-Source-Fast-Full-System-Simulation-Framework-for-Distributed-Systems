#ifndef QEMU_NET_COQEMU_H
#define QEMU_NET_COQEMU_H




#define SYNCH_TIMER_CD 100
#define RCV_PACKET_TIMER_CD 100
#define FAST_SECS_DEFAULT 120

ssize_t qemu_send_packet(NetClientState *nc, const uint8_t *buf, int size);
ssize_t qemu_deliver_packet_iov(NetClientState *sender,
                                       unsigned flags,
                                       const struct iovec *iov,
                                       int iovcnt,
                                       void *opaque);
void init_my_timers(void);
void init_coqemu_synch(void);
void register_coqemu_exit_notifier(void);


#endif /* QEMU_NET_COQEMU_H */
