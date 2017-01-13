#include <stdio.h>

int main()
{
  int tab[] = {1, 2, 4, 6, 12};
   int n = (sizeof tab) / sizeof(int) - 1;

   for (int i = n; i >= 1; i--) {
     printf("%d\n", tab[i]);

   }
}
