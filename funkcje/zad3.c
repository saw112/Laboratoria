#include <stdio.h>

int isperfect(int n) {
  int sum = 0;
  for(int i = 1; i < n; i++) {
    if (n % i == 0)
      sum += i;
  }
  if (sum == n) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  for(int i = 1; i <= 10000; i++)
      printf((isperfect(i))? "%d\n" : "", i);
}