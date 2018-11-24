/*
Schreiben Sie das nachfolgende Programm so um, dass die for-Schleife durch
eine while-Schleife ersetzt wird.

Original:

#include <stdio.h>
int main()
{
  long lEuro, lMaxEuro;
  double dKurs;
  printf("\n\n* * * KURSTABELLE € - USD * * *");
  printf("\nBitte den Kurs € - USD eingeben: ");
  fflush(stdout);
  scanf("%lf", &dKurs);
  printf("\nBitte die Obergrenze der Tabelle eingeben:");
  fflush(stdout);
  scanf("%ld", &lMaxEuro);
  printf("\n%10s %10s\n", " €", "USD");
  for (lEuro = 1; lEuro <= lMaxEuro; lEuro++) {
    printf("%10ld %10.2f\n", lEuro, lEuro/dKurs);
  }
  return 0;
}

*/


#include <stdio.h>
int main()
{
  long lEuro, lMaxEuro;
  double dKurs;
  printf("\n\n* * * KURSTABELLE EUR - USD * * *");
  printf("\nBitte den Kurs EUR - USD eingeben: ");
  fflush(stdout);
  scanf("%lf", &dKurs);
  printf("\nBitte die Obergrenze der Tabelle eingeben:");
  fflush(stdout);
  scanf("%ld", &lMaxEuro);
  printf("\n%10s %10s\n", " EUR", "USD");


  for (lEuro = 1; lEuro <= lMaxEuro; lEuro++) {
    printf("%10ld %10.2f\n", lEuro, lEuro/dKurs);
  }

  lEuro = 1;
  while (lEuro <= lMaxEuro) {
    printf("%10ld %10.2f\n", lEuro, lEuro/dKurs);
    ++lEuro;
  }
  return 0;
}
