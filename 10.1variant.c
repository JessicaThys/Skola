#include <stdio.h>
#include "mystring.h"

int main()
{
    FILE *infile = fopen("Temp.txt", "r");
    double temp, max = - temp, sum = 0;
    int a = 0;

    while (fscanf(infile, "%lf", &temp) == 1)
    {
        a++;
        sum = sum + temp;
        if (temp > max)
        max = temp;
        }
    printf("Max temperature: %.2f degrees celsius.\nAvarage temperature: %.2f degrees celsius.\n", max, sum/a);
}