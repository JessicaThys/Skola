#include <stdio.h>

int main ()
{
    printf("Jessica\n");

    char a = 'J';
    char b = 'e';
    char c = 's';
    char d = 's';
    char e = 'i';
    char f = 'c';
    char g = 'a';

    printf("%c%c%c%c%c%c%c\n", a, b, c, d, e, f, g);

    char a1[8] = "Jessica";
    printf("%s\n", a1);
    return 0;
}