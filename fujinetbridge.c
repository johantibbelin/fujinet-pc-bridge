/**
 * @file fujinetbridge.c
 * @author Johan Tibbelin (sjfroos) (johan.roos@tibbelin.com)
 * @brief Fujinetbridge: bridging to fujinet-pc. 
 * @version 0.1
 * @date 2023-07-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "config.h"
#include <stdio.h>
#include <stdlib.h>

#include "fujinetbridge.h"
#include "midibridge.h"

#ifdef __WITH_NCURSES__
#include <ncurses.h>
#endif /* __WITH_NCURSES__ */

void write_helpmsg() {
    printf("usage: fujinetbridge [device]\n");
}

void write_startmsg()
{
    printf("Fujinet Bridge %.2f\n\n",FNB_VERSION);
}

/**
 * @brief Main: process parameters and starts (obiously)
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc, char** argv)
{
    #ifdef __WITH_NCURSES__
    initscr();
    cbreak();
    #endif /* NCURSES */
    char midi_dev[50];
    write_startmsg();
    if (argc !=2) {
        write_helpmsg();
        #ifdef __WITH_NCURSES__
        endwin();
        #endif /* NCURSES */
        exit(EXIT_SUCCESS);
    } 
    else {
        if (argv[1]="-testmidi") {
            
        }
        
        printf("%s \n\n",argv[1]);
    } 
    start_midibridge();
    return 0;
}