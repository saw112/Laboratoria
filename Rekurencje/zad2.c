#include <stdio.h>

int wd(int n, int k);

int main() {
  printf("wd(6, 2) = %d\n", wd(6, 2));
  printf("wd(6, 0) = %d\n", wd(6, 0));
  printf("wd(6, 6) = %d\n", wd(6, 6));
  // prin()
}

int wd(int n, int k) {
    if (k == 0 || k == n)
        return 1;
      else
      return wd(n - 1, k -1) + wd(n -1, k);

}
