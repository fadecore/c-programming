/*
Implementieren Sie das Programm "Hello World!".

Erweitern Sie das Programm "Hello World!" um die folgenden Möglichkeiten:
▪ Das gestartete Programm hält nach der Ausgabe an.
▪ Das Programm fragt nach Ihrem Namen und gibt den Text aus:
"Hello <Vorname>!"
*/

#include <stdio.h>

int main()
{
   char vorname[64];

   printf("Bitte geben Sie ihren Vornamen ein: ");

   scanf("%s", &vorname);

   printf("Hello %s!", vorname);

   return(0);
}
