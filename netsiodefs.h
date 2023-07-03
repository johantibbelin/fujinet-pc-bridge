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

#endif /* NETSIODEFS_H */