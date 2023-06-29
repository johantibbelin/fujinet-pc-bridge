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
#include "netmidi.h"

static int mfd;

void midi_sendbyte(uint8_t sbyte) {
    #ifdef __APPLE__
    core_midi_sendbyte(sbyte);
    #endif /* __APPLE__ */
}

uint8_t midi_recivebyte() {

    uint8_t b;
    return b;
}
int midi_setup() {
    #ifdef __APPLE__
    return core_midi_setup();
    #else
    mfd = open(mididev, O_RDONLY);
    if (mfd == -1)
        printf("Midi: opening device failed!\n");
    #endif /* __APPLE__ */ 
}
int midi_close() {
    int status=close(mfd);
    if (status != -1)
        return 0;
    else
        return -1;
}

#ifdef __APPLE__

int core_midi_setup() {

}
void core_midi_sendbyte() {

}

uint8_t core_midi_recivebyte() {

}


#endif /* __APPLE__ */