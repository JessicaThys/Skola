/* Description: Morse Code SOS    */
/* File name:   sos.c             */
/* Date:        20200928          */
/* Author:      Jessica Thyselius */

#include <stdio.h>
#include <unistd.h>
int onTimeShort = 1000000;
int onTimeLong = 2000000;
int offDelay = 3000000;
int main(){
	while (1)
    {
        for (int i = 0; i <= 3; i++) { //Three short blinks.
        system("cls");
        printf("Light on\n");
        usleep(onTimeShort);
        printf("Light off \n");
        usleep(offDelay);
        }
        for (int i = 0; i <= 3; i++) { //Three long blinks.
        system("cls");
        printf("Light on\n");
        usleep(onTimeLong);
        printf("Light off \n");
        usleep(offDelay);
        }
        for (int i = 0; i <= 3; i++) { //Three short blinks.
        system("cls");
        printf("Light on\n");
        usleep(onTimeShort);
        printf("Light off \n");
        usleep(offDelay);
        }
        usleep(2000000);
    }
    return 0;
}