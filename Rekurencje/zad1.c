#include <stdio.h>

int nk(int podstawa, unsigned int  wykładnik);

int main() {
  printf(" 5^4 = %d\n ", nk(5, 4));
  printf(" 5^0 = %d\n ", nk(5, 0));
}

    int nk(int podstawa, unsigned int  wykładnik);{
      if (wykładnik == 0 )
      return 1;
      else
      return podstawa * nk(podstawa, wykładnik - 1);
    }
