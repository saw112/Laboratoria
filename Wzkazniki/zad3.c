#include <stdio.h>


  void podnies_do_kwadratu(int *n)
  {
    int a = *n;
    *n = a * a;

  }

void wczytaj_liczbe(int *n)
{
  printf("Wpisz liczbę naturalna: ");
  scanf("%d",n);

}

int main()
{
   int liczba;
   wczytaj_liczbe(&liczba);
   podnies_do_kwadratu(&liczba);
   printf("Kwadrat wczytanej liczby to %d\n", liczba);
   return 0;
}
