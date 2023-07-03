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

// events to manage device connection (connect, ping, alive) >= 0xC0
#define NETSIO_CONN_MGMT        0xC0

// NETSIO_SYNC_RESPONSE types
#define NETSIO_EMPTY_SYNC       0x00
#define NETSIO_ACK_SYNC         0x01

// Altirra specific (not used at the moment)
#define ATDEV_READY             0x100
#define ATDEV_TRANSMIT_BUFFER   0x101
#define ATDEV_DEBUG_MESSAGE     0x102
#define ATDEV_EMPTY_SYNC        -1 # any value less than zero


// local TCP port for Altirra custom device communication
#define NETSIO_ATDEV_PORT   9996
// UDP port NetSIO is accepting messages from peripherals
#define NETSIO_PORT         9997

/* client expiration period in seconds
   if NetSIO HUB will not receive alive message (NETSIO_ALIVE_REQUEST) from device the device
   connection is being considered as expired and the device is disconnected from the HUB
*/
#define ALIVE_EXPIRATION 30.0f

#endif /* NETSIODEFS_H */