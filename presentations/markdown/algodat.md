## AlgoDat Notizen

---

## Algorithmus
 - Mechanisch ausführbares Rechenverfahren
 - endlich, schrittweise
 - jeder Schritt ist Anzahl ausführbarer, eindeutiger Operationen + Angabe über nächsten Schritt
---
## Eigenschaften
 - Lösung einer Klasse von Problemen über Eingabe(-parameter) und Ausgabe
 - die Beschreibung ist endlich: statische Finitheit
 - zu jedem Zeitpunkt nur endlich viel Speicherplatz: dynamische Finitheit
---
 - Terminierung: endlich viele Schritte
 - Determiniertheit: Gleiche Eingabe - gleiches Ergebnis
 - Determinismus: Gleiche Eingabe - gleicher Rechenverlauf
---
## Applikative Algorithmen
 - Menge von Funktionsdefinitionen
 - Erste Funktion ist Semantik des Algorithmus (high level / leserlich)
 - Aus der Mathematik bekannt (Funktionen, Terme...)
 - Oft rekursiv
 - Funktionale Programmierung
---
 - Keine Variablen
 - Keine Klassen, Methoden
 - Keine Zuweisunge
 - kein while, for, if
---
## Imperative Algorithmen
 - Anweisungen und Variablen
 - Sequentiell
---
## Beschreibung von Algorithmen
 - Graphisch (Diagramm, UML, PAP, ...)
 - Textuell (Informell, Pseudocode, code...)

---

## Suchen
Eine der häufigsten Aufgaben von Computern
---
## Sequentielle Suche
Einfach Eintrag für Eintrag durchgehen
Best Case: 1
Worst Case: n
Avg. Case: (n+1)/2
Komplexität: O(n)
---
## Binäre Suche
Folge muss sortiert sein
1. Mitte starten
2. Gucken ob es das gesuchte ist, wenn ja fertig
3. Sonst: Ist es größer oder kleiner?
4. Dementsprechende Hälfte der Folge nehmen und damit bei Schritt 2 weitermachen
---
## Komplexität
Best Case: 1
Worst Case: ~log n
Avg. Case (same for success and failure): ~log n
Komplexität: O(log n)

---

## Sortieren
Ebenso wichtig wie suchen, siehe Komplexität Binäre Suche vs Sequentielle Suche
---
## Ordnungsrelation
Wenn man über eine Menge eine Ordnungsrelation bilden kann, kann man sie sortieren
 - Reflexiv, antisymmetrisch und transitiv
 - Total wenn man jedes Element miteinander vergleichen kann, sonst partiell
---
## Verfahren
Intern : In Hauptspeicherstrukturen
Extern: Auf externen Medien
Stabil: Immer gleiche Reihenfolge relativer Schlüssel
---
## Insertion Sort
Von links nach rechts Element für Element durchgehen
Dortiges Element nehmen und so lange mit linkem Nachbarn tauschen bis es passt
Komplexität: O(n²)
	-> Doppelte for Schleife, Gaußsche Summenformel
---
## Gaußsche Summenformel
Bei sowas wie Insertion Sort hat man die äußere for-Schleife die n-mal läuft
Die innere erst 1 mal, am Ende n-1 mal
Resultiert in ungefähr n-1 * 0,5*n -> O(n²)
---
## Selection Sort
Größten Wert suchen und an letzte Stelle der sortierten Liste packen
Unabhängig vom Case immer ~n²/2 Schritte
Komplexität von O(n²) -> wieder doppelte for Schleife
---
## Bubble Sort
So lange wie unsortiert:
Von links nach rechts durchegehen
Wenn benachbarte Elemente unsortiert sind tauschen
"Bubblet" jede Iteration den größten übrigen Wert nach rechts
---
## Merge Sort
Liste so lange in Teile zerlegen bis die alle nurnoch 1 groß sind
Dann Schritt für Schritt diese zusammenfassen und sortieren
Vorteil: Man merged immer bereits sortierte Listen
Komplexität von O(n * log n)
Teile und Herrsche
---
## Quick Sort
Ähnliche Aufteilung wie Merge Sort, aber in Place
1. Pivot Element nehmen (z.B. mittleres)
2. Von links nach rechts laufen bis größeres Element als Pivot gefunde
3. Von rechts nach links laufen bis kleineres Element als Pivot gefunden
4. Tauschen
5. Solange machen bis sich die 2 Indize kreuzen
6. Rekursive Wiederholung für linke sortierte Liste und rechte sortierte Liste (Split am Kreuz von links und rechts)
---
Best Case: n * log n
Worst Case: n² (sehr selten=
Avg. Case: n * log n
Komplexität is O(n * log n)
Im Vergleich zu MergeSort ist QuickSort instabil!
---
## Shell Sort
Basically Insertion Sort
Unterschied: Man schiebt nicht um 1 beim einfügen sondern um h
---
## Vergleich
Selection Sort	Instabil	n²/2
Insertion Sort	Stabil		n²/4
Bubble Sort	Stabil		n²/2
MergeSort	Stabil		n log n
QuickSort	Instabil	n log n
Shell Sort	Instabil	n^4/3

---

##Komplexität
Theoretische Analyse eines Algorithmus
Unabhängig von Hardware, Programmierpsprach etc
---
## Aufwandsfunktion
Ist meist nicht exakt bestimmbar
Abschätzung des Aufwands, ungefähres Rechnen mit Größenordnungen
---
## O-Notation
Bestimmung der obere Schranke g von f
Man sucht eine n0 und ein c
Ab n0 is c * g(n) >= f(n)
Dann hat f eine Komplexität von O(g)
	-> f wächst höchstens so schnell wie g
---
 - Weglassen von multiplikativen Konstaten
 - Weglassen von additiven Konstanten
 - Beschränkung auf höchsten Exponenten
 - Basis des log is egal, ist im Endeffekt eh nur ein Vorfaktor
---
O(1)		Konstante Komplexität
O(log n)	Logarithmische "-"
O(n)		Lineare "-"
O(n log n)	Leicht übrlineare "-"
O(n²)		Quadratische "-"
O(n³)		Kubische "-"
O(x^n)		Exponentiell "-"
---
Obere Schranke ist O
Untere Schranke ist großes Omega
Asymptotisch scharfe Schranke ist O mit strich in mitte
---
## P vs NP
P kann deterministisch in nicht exponentieller Zeit gelöst werden
NP kann deterministisch in exponentieller Zeit gelöst werden
P != NP ? -> Wahrscheinlich ja, aber ungelöst

---

## Datenstrukturen
Art, Daten zu verwalten und zu verknüpfen um in geeignteter Weise auf diee zugreifen zu könne und sie zu manipulieren
---
## Stack (LIFO)
 - push
 - pop
 - top
 - isEmpty
---
## Queue(FIFO)
 - enter
 - leave
 - isEmpty
 - front
Implementierung z.B. mit Ringpuffer
---
## Linked List
 - Im Gegensatz zu bisherigen Datentypen dynamische Größe
 - Verschiedene Knoten die miteinanader verknüpft sind
 - Knoten enthalten Inhalt und Pointer auf nächsten
 - Spezieller Head Knoten; Letzter zeigt auf null
---
 - addFirst
 - getFirst
 - removeFirst
 - addLast
 - getLast
 - removeLast
---
## Liste
 - isEmpty
 - addFirst
 - getFirst
---
## Doppelt verkettete Liste
Neuer Tail-Zeiger, der aufs letzte ELement zeigt
Außerdem previous Zeiger
 - Ermöglicht rückwärts laufen, auch start vom Tail aus.
 - Reduziert Komplexität des Zugriffs aufs Ende auf O(1)
---
## Test ab## Test [abcc](abcc)
