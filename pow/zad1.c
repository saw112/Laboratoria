#include <stdio.h>
int main() {
  char s1[] "ala"; char *s2;
  s2 = s1;
  *(s1+1) = 'g';
  printf("%s_%s", s1, s2);

   return 0;
}
// a) aga_aga   b)aga_ala  c)ala_ala
