#include <stdio.h>
#include <stdlib.h>

#include "fujinetbridge.h"
#include "midibridge.h"

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
    char midi_dev[50];
    write_startmsg();
    if (argc !=2) {
        write_helpmsg();
        exit(EXIT_SUCCESS);
    } 
    else {
       
        
        printf("%s \n\n",argv[1]);
    } 
    start_midibridge();
    return 0;
}