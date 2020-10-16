/* Description: Morse Code SOS    */
/* File name:   sos3.c            */
/* Date:        20200928          */
/* Author:      Jessica Thyselius */

/* Write a program that types SOS in morse code until the power shuts down. */

#include <stdio.h>
#include <unistd.h>
int main(){
	while (1)
    {
        system("cls");                       // Cleans the screen.
        for (int i = 1; i <= 3; i++) {       // Initiates the program to print "." three times.
        printf(".");
        usleep(100000);                      // Makes a paus. Is included in <unistd.h>.
        }
        for (int i = 1; i <= 3; i++) {
        printf("-");                         // Prints "-" three times.
        usleep(200000);                      // Paus.
        }
        for (int i = 1; i <= 3; i++) {
        printf(".");                         // Prints "." three times.
        usleep(100000);                      // Paus.
        } 
        usleep(300000);                      // Paus.
    }
    return 0;
}