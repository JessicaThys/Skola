/* Description: Morse Code SOS    */
/* File name:   sos2.c            */
/* Date:        20200928          */
/* Author:      Jessica Thyselius */

/* Write a program that types SOS in morse code until the power shuts down. */

#include <stdio.h>
#include <unistd.h>
int main(){
	while (1)
    {
        system("cls");
        for (int i = 1; i <= 3; i++) {
        printf(".");
        usleep(100000);
        }
        for (int i = 1; i <= 3; i++) {
        printf("-");
        usleep(200000);
        }
        for (int i = 1; i <= 3; i++) {
        printf(".");
        usleep(100000);
        } 
        usleep(300000);
    }
    return 0;
}