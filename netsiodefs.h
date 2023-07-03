#ifndef NETSIODEFS_H
#define NETSIODEFS_H

/* UDP Defines */
#define UDP_PORT 5000
#define UDP_BUFFER_SIZE 1024

struct addrinfo hints;
struct addrinfo *result, *rp;
int sfd, s, j;
size_t len;
ssize_t nread;
char buf[UDP_BUFFER_SIZE];

/* netSIO defines */

#define HUB_VERSION = "v0.11"

#define NETSIO_DATA_BYTE        0x01
#define NETSIO_DATA_BLOCK       0x02
#define NETSIO_DATA_BYTE_SYNC   0x09
#define NETSIO_COMMAND_OFF      0x10
#define NETSIO_COMMAND_ON       0x11
#define NETSIO_COMMAND_OFF_SYNC 0x18
#define NETSIO_MOTOR_OFF        0x20
#define NETSIO_MOTOR_ON         0x21
#define NETSIO_PROCEED_OFF      0x30
#define NETSIO_PROCEED_ON       0x31
#define NETSIO_INTERRUPT_OFF    0x40
#define NETSIO_INTERRUPT_ON     0x41
#define NETSIO_SPEED_CHANGE     0x80
#define NETSIO_SYNC_RESPONSE    0x81
#define NETSIO_DEVICE_DISCONNECT 0xC0
#define NETSIO_DEVICE_CONNECT   0xC1
#define NETSIO_PING_REQUEST     0xC2
#define NETSIO_PING_RESPONSE    0xC3
#define NETSIO_ALIVE_REQUEST    0xC4
#define NETSIO_ALIVE_RESPONSE   0xC5
#define NETSIO_WARM_RESET       0xFE
#define NETSIO_COLD_RESET       0xFF
#endif /* NETSIODEFS_H */