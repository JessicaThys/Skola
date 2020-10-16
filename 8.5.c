#include <stdio.h>

double sum(double f[], int n)
{
    double sum = 0;
    for (int i=0; i<n; i++)
    sum += f[i];
    return sum;
}
    double kvad_sum(double f[], int n)
{
    double sum = 0;
    for (int i=0; i<n; i++)
    sum += f[i] * f[i];
    return sum;
} 
int main()
{
    double numbers[3] = {2.5, 1.5, 3.0};
    double mySum = sum(numbers, 3);
    double myKvadSum = kvad_sum(numbers, 3);
   
    printf("Sum: %.2lf", mySum);
    printf("\n");
    printf("KvadSum: %.2lf", myKvadSum);
    return 0;
}