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

/* Functions */
uint8_t netsio_read();
void netsio_write(uint8_t sbyte);

#endif /* NETSIO_H */