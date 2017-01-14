#include <stdio.h>

int main() {
  int tab[512];

  // int *wsk = tab;
  int *wsk
  wsk = tab

  for(int i = 0; i < 512; i++, wsk++) {
    *wsk=128;
  }
  for(int i = 0; i < 512; i += 100) {
    printf("%d\n", tab[i]);
  }
}
