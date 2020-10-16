#include <string.h>
#include <stdio.h>
void backwards(char *s1, const char *s2)
{
  int n = strlen(s2);
  int i = 0, j = n-1;
  for (; i < n; i++, j--)
  s1[i] = s2[j];
  s1[i] = '\0';
}
int main()
{
  char a[100], b[100] = "Jessica Thyselius";
  backwards(a, b);
  puts(a);
}