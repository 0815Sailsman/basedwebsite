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
Worst Case: n² (sehr selten)  
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

## Komplexität
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
### Ziel Datenstrukturen
 - Implementierung komplexer Datentypen
 - Wiederverwendbarkeit
 - Effizienz
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

## Bäume
---
Bisherige Datenstrukturen waren eher linear, hierarchisch und eindimensional  
Bäume sind sog. Indexstrukturen
---
## Wurzelbaum - Vokabular
Verschiedene Knoten, einer als Wurzel markiert  
Knoten ohne Kinder sind Blätter  
Eindeutiger Weg zwischen 2 Knoten  
Niveau eines Knotens: Entfernung zur Wurzel
Höhe des Baums: Größtes Niveau + 1
---
## Binärbaum
Ein Baum, bei dem jeder Knoten 2 oder weniger Nachfolger hat

Wir benutzen diese hauptsächlich als binäre Suchbäume, da sie sich für die binäre Suche anbieten
---
## Realisierung des Baums als Datenstruktur
Jedes Element wird als TreeNode modelliert  
Blätter etc zeigen alle auf eine einheitliche Null-Node. So werden Sonderfälle etc vermieden, da die NullNode immer wieder zu sich selbst navigiert.
---
## Traversierung von Bäumen
Systematisches abarbeiten aller Knoten eines Baumes
---
### Inorder-Traversierung
Linker -> Aktueller -> Rechter
Baum mit Wurzel A, links B rechts C  
-> B A C
---
### Preorder-Traversierung
Aktueller -> Linker -> Rechter
-> A B C
---
### Postorder-Traversierung
Linker -> Rechter -> Aktueller
-> A C B
---
### Levelorder / Breitensuche
Hier wird zeilenweise durch den Baum traverisert  
Dabei wird jede Zeile von links nach rechts abgearbeitet  
-> A B C
---
## Binärer Suchbaum
Enthält sortierte Schlüssel  
Links eines Knotens sind alle kleineren, rechts alle größeren  
Werden auch Dictionaries genannt
Jedes Element ist mit jedem vergleichbar -> Totale Ordnung
---
Vergleichbarkeit lässt sich mit Comparator realisieren  
Comparator für Klasse <x> muss dann eine Funktion compare(x1, x2) anbieten
---
Sonst auch die Objekte sich selber als Comparable vergleichen lassen  
Dann kann x1.compareTo(x2) den Vergleich durchführen
---
## Löschen im binären Suchbaum
1. Zu löschenden Knoten finden
2. Nachrückenden Knoten finden:
	- Blattknoten -> NullNode
	- nur ein rechtes child -> das
	- nur ein linkes child -> das
	- 2 childs -> kleinstes im rechten / größtes im linken
3. Baum reorganisieren
---
## Ausgeglichen und entartet
Ausgeglichen: Möglichst kleine (logarithmische Höhe)
Entartet: Das Gegenteil, eben wenns nicht minimal ist

Komplexität der Operationen hängt mit der Höhe des Baumes zusammen  
Deshalb ist ausgeglichener Baum erstrebenswert
---
## 2-3-4 Bäume
Mehr als ein Schlüssel pro Knoten (hier 1..3)
bei 3 schlüsseln: 4 lücken -> 4 kinder
Benennung nach Anzahl Kindern:  
2 Knoten -> 2 Kinder -> 1 Schlüssel
3 Knoten -> 3 Kinder -> 2 Schüssel
4 Knoten -> 4 Kinder -> 3 Schüssel
---
## Einfügen (Bottom up)
Bei 2 oder 3 Knoten einfach zum Knoten adden  
Bei 4 Knoten einfügen, in 2 3er Knoten aufteilen und 1 mittleren Schlüssel nach oben ziehen  
Nachteil: Man muss nach oben navigieren. Normalerweise keine parent pointer vorhanden!
---
## Einfügen (Top down)
Vorsorglich bei Suche des Zielknotens alle 4er aufteilen.  
Dann geht das einfügen auch, weil maximal einer 3er Knoten gefunden wird.

---

## Rot-Schwarz Bäume
Verwalten von Knoten mit mehreren Inhalten ist schwierig  
Deswegen realisierung des 2-3-4 Baums als Rot-Schwarz Baum, der einfacher Binärbaum ist
---
 - Binärbaum
 - Jeder Knoten ist entweder rot oder schwarz
 - Jeder Null Knoten ist schwarz
 - Childs von rot sind schwarz
 - Für jeden Knoten: Pfad zu einem Blatt gleiche Anzahl schwarze Knoten
---
Suchen und Traversieren geht alles direkt, weil ja "normaler" Binärbaum  
Einfügen wird als Top-Down realisiert, um rot/schwarz Eigenschaften beizubehalten---
## Einfügen in rot-schwarz Baum
nichtrekursiv einfügeposition suchen  
alle 4er knoten splitten:
---
### 4er Knoten hängt an 2er Knoten
Einfach umfärben  
von dem 4er Knoten werden die 2 roten Schwarz und die schwarze rot  
effektiv wird halt der mittlere ausm 4er knoten hochgezogen
---
### 4er Knoten hängt links an 3er Knoten
Child des 3er Knotens an dem wir hängen hoch-rotieren (wird parent des 3ers)  
umfärben, sodass das hochrotierte jetzt parent eines 4er knotens ist
---
### 4er Knoten hängt mittig an 3er Knoten
Parent des 4er Knotens hochrotieren, ist dann child des 3ers  
Gleiche Node nochmal hochrotieren, ist dann parent des 3ers  
umfärben, sodass die node parent eines 4ers ist
---
### 4er Knoten hängt rechts an 3er Knoten
Einfach umfärben, dass der 3er zu nem 4er wird

---

## B(alancierte)-Bäume
Idee: Ausgeglichen aber unterschiedlich verzweigt  
Aber: Seiten statt Knoten
---
Dynamischer, balancierter Suchbaum  
Alle BlattSeiten liegen auf dem gleiche Niveau  
jede Seite (außer wurzel) enthält zwischen m und 2m schlüssel
Jeder innere Knoten mit i Elementen hat i+1 Verweise auf andere
---
## Suche im B-Baum
Ähnlich wie 2-3-4  
Binäre Suche in Seite für passenden Verweis  
Rekursiv weiter bis gefunden
---
## Einfügen in B-Baum
 - Passende Seite suchen
 - Wenn < 2m Elemente -> in Seite einsortieren
 - Wenn = 2m Elemente
	- Neue Seite
	- erste m elemten bleiben
	- letzten m in neue seite
	- mittleres element in parent
	- evtl rekursiv weiter
---
## Löschen in B-Baum
Problem: Seite könnte leer werden  
Entweder Elemente von Nachbar rüberziehen (aber auf mind. m achten)  
Oder Mit Nachbar mergen, dabei parent des gelöschten auch reinziehen

---

## Digitale Bäume
---
## Radix-Sort
Basically erst alles nach letzter Stelle in Buckets sortieren  
Dann nach vorletzter usw.
---
## Trie
von text reTRIEval  
ein knoten ist ein alphabet  
so entstehen bei manövrieren von knoten zu knoten wörter
---
## Heap
Ist Binärbaum der:  
Vollständig ist (Blattebene von links nach rechts befüllt)  
Bei dem Children immer größere keys als parent haben -> Wurzel ist kleinstes
---
### Re-Heap bei getMinimum()
Entfernen der Wurzel führt zu "Loch". Dann:  
Rechtestes Element aus Blattebene neue Wurzel  
Mit kleinstem Child tauschen  
Wiederhole für runtergetauschte Node rekursiv
---
### Re-Heap unsortiertes Feld
Start bei rechtestem Knoten auf vorletzter Ebene da die darunter Blätter ohne Kinder sind  
Dann für den re-heap(nicht hoch ziehen sondern nur runter tauschen)
---
## Heap Sort
ähnlich wie selection sort:  
Für jedes Element von hinten:  
heap erstellen und rekursiv re-heapen
Wurzel ist kleinstes element gerade -> speichern
---
Komplexität : O(n * log n)  
Besser als QuickSort, vergleichbar mit MergeSort  
InPlace  
Instabil

---

## Iteratoren
---
Einheitliches navigieren durch Listen  
Klassen die das implementieren bieten ein Objekt an, mit dem man über die Datenstruktur traversieren kann  
Ist effektiv einfach ein interner Pointer auf die aktuelle Position
---
### java.util.Iterator<T> / Iterable
boolean hasNext()  
T next()  
void remove()

Verwendung:  
Entweder iterator holen und mit while  
Oder einfach for each auf der Datenstruktur die den Iterator implementiert

---

## Collection Framework
Viele Implementierungen von Algorithmen und Datenstrukturenl
---
java.util.List -> Listen  
java.util.Set -> Menge  
java.util.Map -> Verzeichnis

---

## Hashing
---
Speicherung der Elemente in Feld  
Hashfunktione h(e) bestimmt die Position des Elements im Feld  
Hashfunktion sollte kollisionsfrei/-arm verteilen
---
## Hashfunktionen
Vorlesung einfache Varianten in der Form i mod N  
Für Datentypen != integer, Rückführung auf Integer  
-> Ascii Wert, Mantisse und Exponentn addieren...
---
### Anforderungen
Gut streuen  
Effizient berechenbar  
Gleiche Objekte gleicher Hash  
deterministisch
---
## Kollisionsstrategie
Verkettung der Überläufer bei Kollision  
-> Einträge sind immer linked Lists und man hängt kollidierendes einfach an


Sondieren(Suchen einer alternativen Position)  
-> wenn T[h(e)] besetzt -> T[h(e)+1] oder statt 1 Konstante c  
-> oder auch quadratisch weitergehen
---
Suche nach Element muss dementsprechende angepasst werden:  
z.b. bei sondieren bis erstes mal null suchen
---
## Aufwand
Bei geringer Kollisionswahrscheinlichkeit O(1)  
Füllgrad über 80% -> Einfüge/Suchverhalten wird dramatisch schlechter

Füllgrad a = m/N  
m Anzahl Elemente  
N Anzahl Buckets

Aufwand abhängig vom Füllgrad
---
## HashMaps in Java
Ehem. HashTable, aktueller: HashMaps  

---

## Graphen
---
Netzwerk aus Knoten und Kanten  
vielfältige Einsätze  
Bäume und Listen sind spezielle Graphen
---
## Ungerichteter Graph
endliche Menge Knoten und Kanten(2-elementige Teilmengen von V)  
Knoten einer Kante heißten Endpunkte  

Keine Pfeile, Mehrfachkanten, Schleifen
---
## Gerichtete Graphen
Jetzt ist die Teilmenge für die Kanten geordnet (Reihenfolge relevant)  
Jetzt gibts Pfeile  
Außerdem sind dann auch Reflexive Kanten möglich
---
## Gewichtete Graphen
Kanten können ein Gewicht bekommen  
Anwendung: Kürzester Weg etc.
---
## Realisierung von Graphen

