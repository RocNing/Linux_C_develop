#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mian(int argc, char** argv)
{
    time_t cur_time;    //store current time
    if (cur_time = time(NULL) == -1) { //get current system time
        perror("time");
        exit(1);
    }
    printf("the current time is: %d \n", (int)cur_time); //output current time

    return 0;
}