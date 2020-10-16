/* Description: Palindrome        */
/* File name:   9.2.c             */
/* Date:        20201012          */
/* Author:      Jessica Thyselius */

#include <stdio.h>
#include "mystring.h"
#include "mystring.c"

void backwards(char *s1, const char *s2)
 
int main()
{
    printf("Write a text to see if it's a palindrome.\n");
    char s[100], t[100];
    fgets(s, 100, stdin);
    remove_white(t, s);
    tolower_str(t, t);
    char b[strlen(t)+1];
    backwards(b,t);
    if (strcmp(b, t) == 0)
    printf("Palindrome\n");
    else 
    printf("No palindrome\n");
}