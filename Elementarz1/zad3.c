#include <stdio.h>

int main()
{
   int tab[] = {1, 2, 4, 6, 12, 15};
   int n = (sizeof tab) / sizeof(int);
   int i;

    printf("rozmiar tabeli = %d\n", n);

   i = n;
   while (i >= 0) {
     i--;
     printf("%d\n", tab[i]);
    }
  }
