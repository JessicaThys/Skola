/* Description: Pris inklusive moms */
/* File name:   6.2.c               */
/* Date:        20201002            */
/* Author:      Jessica Thyselius   */

#include <stdio.h>

int main() {
    double prisExMoms, momsProcent, pris;
    printf("Priset utan moms? "); 
    scanf("%lf", &prisExMoms);
    printf("Moms i procent? ");
    scanf("%lf", &momsProcent);

    pris = prisExMoms * (momsProcent/100 + 1);
    printf("Pris med moms: %0.2lf", pris);
    return 0;
}