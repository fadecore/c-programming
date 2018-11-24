/*
Prüfe ob eine eingegebene Zeichenkette ein Palindrom ist.
Als Palindrom (altgriechisch παλίνδρομος palíndromos „rückwärts laufend“) werden in der Sprachwissenschaft Wörter, Wortreihen oder Sätze bezeichnet, die rückwärts gelesen genau denselben Text oder zumindest einen Sinn ergeben.
In der Informatik ist ein Palindrom eine Zeichenkette, die vorwärts wie rückwärts gelesen identisch ist.
*/

/*
Überlegungen vor Beginn:
1. Eingabe einer Zeichenkette und Speicherung als Variable vom Typ char (enhält auch Zahlen)
2. Zählen der Zeichen, bei ungerader Anzahl kann es kein Palindrom sein.
3. Aus der Zeichenkette das erste und letzte Zeichenausschneiden, und jeweils als einzelne Variable für einen Vergleich zu speichern.
  Gleichzeitig wird dadurch die ursprüngliche Zeichenkette von Außen nach Innen kleiner und denbeschriebenen Vorgang kann man einfach wiederholen bis die Zeichenkette leer ist.
  Wahrscheinlich kann man die Gesamtanzahl der Zeichen aus 1. sinnvoll verwenden.
4. Fertig?

Fazit:
2. Hilft einem nicht, da tacOcat auch ein Palindrom ist
*/

#include <stdio.h>

int main()
{
  char Zeichenkette[100];
  int AnzahlZeichen;
  //int i = 0; //Bei Verwendung von for fuer zaehlen der zeichen
  int vorne, hinten;
  //float  j; //Zur Prüfung auf gerade Zahlen
  printf("Polindrom-Pruefer\n");
  printf("Geben Sie das Wort ein, welches geprueft werden soll: ");
  scanf("%s", &Zeichenkette);
  printf("\nDie Pruefung fuer folgende Zeichenkette wird gestartet: %s\n", Zeichenkette);

  AnzahlZeichen = printf("%s", Zeichenkette);
  printf("\nAnzahl an Zeichen: %i\n", AnzahlZeichen);
  //Alternative:
  //for  (i = 0; Zeichenkette[i] != '\0'; ++i);
  //printf("Anzahl an Zeichen: %i\n", i);
  //AnzahlZeichen = i;

  for ( int a = 0; a <= AnzahlZeichen; a = a + 1)
  {
    //Ausgabe beginnt mit  0, da ArrayItem immer mit 0 beginnt
    //printf("%i.Zeichen ist:%c\n", a, Zeichenkette[a]);
  }

  vorne = 0;
  hinten = AnzahlZeichen - 1; //-1, da im Array mit 0 angefangen wird
  char Zeichenketterueck[100];

  while ( hinten >= 0) {
    //printf("Zeichen: %c \n", Zeichenkette[hinten]);
    Zeichenketterueck[vorne] = Zeichenkette[hinten];
    //printf("Zeichenrueck: %c \n", Zeichenketterueck[vorne]);
    hinten--;
    vorne++;
  }
  printf("Zeichenkette: %s \n", Zeichenkette);
  printf("Zeichenketterueck: %s \n", Zeichenketterueck);

  for ( int spalte = 0; spalte <= AnzahlZeichen ; spalte++) {

    if (Zeichenketterueck[spalte] != Zeichenkette[spalte]) {
      printf("\nKEIN PALINDROM");
      spalte = AnzahlZeichen + 1;
    }
  }
    //Wennin der Schleife kein "Fehler" gefunden wurde ist es ein Palindrom
    //printf("\n### Glueckwunsch! Du hast ein Palindrom gefunden! ###");


    return(0);
}
