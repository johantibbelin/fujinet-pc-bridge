/**
 * @file netsio.h
 * @author Johan Tibbelin (johan.roos@tibbelin.com)
 * @brief netSIO 
 * @version 0.1
 * @date 2023-06-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef NETSIO_H
#define NETSIO_H

#include <stdint.h>
#include "netsiodefs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>

/* Netsio functions */
uint8_t netsio_read();
void netsio_write(uint8_t sbyte);

/* Netsio test: 
 * Function for testing connection with fujinet-pc
 */

void netsio_test();

/* UDP functions */

#endif /* NETSIO_H */