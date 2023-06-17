#include <stdio.h>
#include <stdlib.h>

#include "fujinetbridge.h"

void write_startmsg()
{
    printf("Fujinet Bridge FNB_VERSION \n");
}

int main(int argc, char** argv)
{
    char midi_dev[50];
    write_startmsg();
    if (argc !=2) {
        write_helpmsg();
        exit(0);
    } 
    else {
        *midi_dev=argv[1];
        printf("%s",midi_dev);
    } 

    return 0;
}