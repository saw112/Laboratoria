#include <stdio.h>
#include <math.h>
int main()
{
  for(int a = 1; a < 1000; a++)
  { for(int b = a; b < 1000; b++)
    { for(int c = b; a+b+c <= 1000 ; c++)
      { if (a*a + b*b == c*c)
        {printf("%d\t%d\t%d\n", a, b, c);}
      }
    }
  }
}
