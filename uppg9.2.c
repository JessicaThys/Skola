/* Description: Palindrome        */
/* File name:   9.2.c             */
/* Date:        20201012          */
/* Author:      Jessica Thyselius */

#include <stdio.h>
#include "mystring.h"
#include "mystring.c"

char backwards(char a[]);

int main()
{
    char inputtext[100];
    printf("Write a line to get it back backwards. ");
    scanf("%s", &inputtext[100]);
    printf("is you text backwards.\n", backwards(inputtext[])));
    return 0;
}
char backwards(char a[])
{
    int stringlength = strlen a);
    for (int fromEnd = stringlength; fromEnd < a2-1 ; fromEnd--)
    {
        
        char outputtext = (a[fromEnd]);
        printf("%c\n", outputtext);
    }
    return 0;
}