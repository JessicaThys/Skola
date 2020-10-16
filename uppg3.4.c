 #include <stdio.h>
 int main () {
   printf("Skriv 0 om du ar tjej och 1 om du ar kille? ");
   int k;
   scanf("%d", &k);
   printf("Ditt personnummer (10 siffror utan bindestreck)? ");
   long long int pnr;
   scanf("%lld", &pnr);
   pnr = pnr / 10;
   if (k == 0 && pnr % 2 == 0 || k == 1 && pnr % 2 == 1)
   {
     printf("Stammer");
   }
   else {
     printf("Stammer inte");
   }
 return 0;
 }