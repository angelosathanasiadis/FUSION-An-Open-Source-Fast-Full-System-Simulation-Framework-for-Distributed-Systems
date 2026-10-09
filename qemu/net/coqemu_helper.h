#ifndef COQEMU_HELPER_H
#define COQEMU_HELPER_H

#ifdef __cplusplus
extern "C" {
#endif

/// Your plugin entry point
void angelos_test(void);
void init_HLA(int *_nodeNumber,int *_totalNodes);
int fill_the_packet(uint8_t **data, size_t *len);
void clear_the_packet(void);
void exit_function(void);
void print_send_raw_packet(const uint8_t *data, size_t len);
void print_rcv_raw_packet(const uint8_t *data, size_t len);
void step_hla(void);
int BufferPacketEmpty_hla(void);
void send_packet_hla(const uint8_t *data, size_t len);

#ifdef __cplusplus
}
#endif

#endif // COQEMU_HELPER_H
