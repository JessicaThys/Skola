 #include <stdio.h>
 int main () {

   int mtabell;
   printf("Multiplikationstabell (ange heltal). ");
   scanf("%d", &mtabell);
   
   for (int i=1; i <= mtabell; i++)
   {
      for (int j=1; j <= i; j++)
      { 
         printf("%3d ", i*j);
      }
      printf("\n"); 
   }
   return 0;
}