#include <stdio.h>
#include "mystring.h"

int main()
{
  FILE *infile = fopen("Hey.txt", "r");
  int hey;
  while ((hey = fgetc(infile)) != EOF)
  {
    if (hey == '\t')
    { 
	  printf("   ");
    }
    else
    {
    putchar(hey);
    }
  }
}