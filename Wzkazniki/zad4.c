#include <stdio.h>

int diff_max_min(int array[], size_t length) {
  int min, max;
  min = max = array[0];
  for(size_t i = 1; i < length; i++) {
    if (array[i] > max) {
      max = array[i];
    } else if (array[i] < min) {
      min = array[i];
    }
  }
  return max - min;
}

int main() {
  //tester
  int a[10] = {1, 8, -7, 2, 3, 10, 21, 7, 7, 1};
  printf("%d\n", diff_max_min(a, 10));
}
