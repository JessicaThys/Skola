#include<stdio.h>
int main(){
printf("Miles per gallon?");
double milespergallon;
scanf("%lf",&milespergallon);
double literpermil = 3.785/milespergallon/1.609*10;
printf("%.2fl/mil\n",literpermil);
}