#include <stdio.h>
int main()
{
  int *wsk;
    int tab[2][2] = {{12, 14}, {16}};
    wsk = tab[0];

  printf("%d %d\n", *wsk, *(wsk + 2));
  printf("%d %d\n", tab[0][0], tab[1][0]);
}
