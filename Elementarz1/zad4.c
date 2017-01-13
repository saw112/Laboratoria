#include <stdio.h>

int silnia(int k)
{
  int s = 1;
  for(int n = 1; n <= k; n++) {
    s = s * n;


  }
  return s;


}
int main() {
  printf("silnia(5) = %d\n", silnia(5));
  }
