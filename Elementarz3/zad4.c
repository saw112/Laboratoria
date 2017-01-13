#include <stdio.h>
int main()
{
  char d;
  int tab[256],t;
  for(int n = 0; n < 257; n++)
    tab[n] = 0; //trzeba wyzerować tablice
  while ((d=getchar()) != EOF) {
    t = d;
    if ((t > 31 && t < 127) || d == '\t' || d == '\n')
      tab[t]++;
  }
  printf("znak\tliczba znakow\n----------------------\n");
  for(int i = 0; i < 257; i++) {
    if (tab[i] > 0) {
      d = i;
      if (d == ' ')
        printf("space");
      else if(d == '\t')
        printf("\\t");
      else if(d == '\n')
        printf("\\n");
      else
        printf("%c", d);
      printf("\t%d\t", tab[i]);
      for(int j = 0; j < tab[i]; j++)
        printf("*");
      printf("\n");
    }
  }
}
