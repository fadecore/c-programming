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

*/

#include <stdio.h>

int main()
{
  char Zeichenkette[100];
  int AnzahlZeichen;
  int i = 0;
  int vorne, hinten;
  float  j; //Zur Prüfung auf gerade Zahlen
  printf("Polindrom-Pruefer");
  printf("Geben Sie das Wort ein, welches geprueft werden soll: ");
  scanf("%s", &Zeichenkette);
  printf("\nDie Pruefung fuer folgende Zeichenkette wird gestartet: %s\n", &Zeichenkette);

  for  (i = 0; Zeichenkette[i] != '\0'; ++i);
  printf("Anzahl an Zeichen: %i\n", i);
  AnzahlZeichen = i;

  for ( int a = 0; a <= AnzahlZeichen; a = a + 1)
  {
    //Ausgabe beginnt mit  0, da ArrayItem immer mit 0 beginnt
    printf("%i.Zeichen ist:%c\n", a, Zeichenkette[a]);
  }

  vorne = 0;
  hinten = AnzahlZeichen - 1;

    for ( hinten; hinten >= vorne; hinten = --hinten )
    {
      printf("Vorne: %c Hinten: %c\n",Zeichenkette[vorne],  Zeichenkette[hinten]);
      if (Zeichenkette[vorne] != Zeichenkette[hinten])
      {
        printf("### Die Zeichenkette \"%s\" ist kein Palindrom! ###\n", &Zeichenkette);
        //Damit die Schleife nicht weiterlaeuft die Bedingungerfüllen oder return(0)
        return(0);
      }
      vorne = ++vorne;
    }

    //Wennin der Schleife kein "Fehler" gefunden wurde ist es ein Palindrom
    printf("### Glueckwunsch! Du hast ein Palindrom gefunden! ###");


  //return (0);
}
