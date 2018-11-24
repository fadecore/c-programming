/*
Programmieren Sie folgendes Zahlenspiel:
Der Computer "merkt" sich eine Zufallszahl zwischen 1 und 15, die der Spieler
(=Benutzer) erraten soll. Der Spieler hat insgesamt drei Versuche.
Nach jedem falschen Versuch gibt der Computer an, ob die angegebene Zahl zu klein
oder zu groß ist. Ist auch der dritte Versuch erfolglos, wird die gesuchte Zahl
ausgegeben. Der Spieler hat gewonnen, wenn er spätestens im dritten Versuch die Zahl
errät. Er soll das Spiel beliebig oft wiederholen können. Verwenden Sie die Systemzeit
zur Initialisierung des Zufallsgenerators wie folgt:
*/
#define _CRT_SECURE_NO_WARNINGS 1  

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{
  int weiter = 0;
  do {
        int zufallszahl;
        int eingabe = 0;
        int versuch = 1;
        int versuche = 3;

        time_t sec;
        sec = time(NULL);           // Zeit in Sekunden ermitteln
        //printf("Ausgabe von sec: &d", sec);
        srand(sec);                 // Initialisierung
        //printf("Ausgabe von sec nach srand: &i", sec);
        zufallszahl = sec % 16;   // Modulo 16 für Rest 1-15

        while ( versuch <= versuche ) {
          printf("\n\n\nZu erratende Zufallszahl ist: %i\n", zufallszahl);
          printf("Geben Sie ihre Zufallszahl zwischen 1 und 15 an: ");
          fflush(stdout);
          scanf("%2d", &eingabe);

            if ( zufallszahl == eingabe ) {
              printf("\nZahlen sind gleich: TOP!\n\n");
              versuch = versuche + 1; // Abbruchbedingung
            } else {
              printf("\nZahlen sind falsch! ");
              versuch++;
            }


          }

        printf("\n####### Spiel vorbei! #######\nWollen Sie erneut spielen geben Sie 1 ein: ");
        fflush(stdout);
        scanf("%1d", &weiter);

      } while ( weiter == 1 );

  return(0);

}
