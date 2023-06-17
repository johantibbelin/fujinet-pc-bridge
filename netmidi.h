/**
 * @file netmidi.c
 * @author Johan Tibbelin (sjfroos) (johan.roos@tibbelin.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef NETMIDI_H
#define NETMIDI_H

#include <stdint.h>
/*  Functions */

void midi_sendbyte(uint8_t sbyte);
uint8_t midi_recivebyte();

#endif /* NETMIDI_H */