## Viel stuff der noch nachgeholt werden muss
---
# TODO
# BILDER VON KNOTEN ETC EINFÜGEN
# PlantUML einbinden und Beispiele einbinde

---
## Aktivitätsdiagramme
Modellieren Abläufe vollständig
 - Abarbeitung eines Use Case
 - Visualisierung einer Operation / Methode

Mächtige Diagrammartgeeignet um komplexe Abläufe zu modellieren  
---
Wir vereinfachen das Ganze, keine:
 - Schleifen, ifs
 - Exceptions
 - Expansions
 - Parametersets
---
## Beispiel
*hier Bsp aus Vorlesung übernehmen* -> PlantsUML
Notes:
Startknoten, Endknoten, Aktionen, Kontrollflussübergabe
---
## Semantik
---
### Tokenkonzept
Wird genutzt um schwere Abläufe zu erklären  
Wandert durchs Diagramm und markiert wo wir gerade sind  
"Stellen wir uns vor", nicht Teil der Notation
---
### Notationselemente - Aktion
Rechteck mit abgerundeten Ecken  
Mit Namen oder ausführlichem Text  
Darstellung mit Parameter möglich  
Mögliche Bedingungen mit OCL definien
---
### Sonderform - Signale
SendSignalAction: Bei Erreichen wir Signal versendet  
AcceptEventAction: bei Erreichen wird gewartet, bis Ereignis kommt  
Ereignisempfänger ohne eingehende Kante wartet auf Event bis es aktiv wird  
Auch möglich Zeitabhängig zu definieren
---
## Aktivität als Ganzes
Inhalt vollständig modellieren  
I/O an Ganzes möglich  
Kann geschachtelt sein
---
### Notationselement - Objektknoten
Repräsentiert Inhalt Variable oder Ergebnis  
Transportieren Daten von A zu B  
Nicht konkretes Objekt, viel mehr Klasse  
Kann listenförmig sein  
Puffer oder Datastore möglich
---
### Notationselement - Kanten
Übergänge zwischen Knoten  
Gerichtet und optionaler Name  
Können gewichtet sein (nix heißt implicit 1). Heißt wie viele Objekte auf einmal durch können.
---
### Notationselement - Sprungmarken
Werden der Übersichtlichkeit halber genutzt  
Kleine Kreies dir paarweise auftreten und normale Kante ersetzen
---
## Notationselement - Kontrollelemente
---
### Startknoten:  
 - Ausgefüllter schwarzer Punkt
 - Beliebig viele Startknoten erlaubt, auch keiner
 - Beliebig viele ausgehende Kanten erlaubt
 - Jeder Startknoten produziert bei Start auf jeder Kante ein Token
---
### Endknoten (Aktivität):
 - "Eingekreister ausgefüllter schwarzer Punkt"
 - Mehre möglich
 - Einer beendet alle
### Endknoten (Kontrollfluss):
 - Beendet nur den aktuellen Ablauf
 - Kreis mit X
---
### Verzeigungsknoten:
 - Raute
 - Bedingung für jeden Zweig
 - Eine eingehende, >= 2 ausgehende Kanten
 - Ist basically if / oder; Token wird nur in eine Richtung geschoben
---
### Verbindungsknoten
 - Gegenstück für Vezweigung
 - ***Keine Synchronisation:*** Führt dir Wege nur wieder zusammen!
---
### Parallelisierungsknoten
Eingehender Ablauf wird in x parallele Abläufe aufgeteilt
---
### Synchronisierungsknoten
Parallele eingehende Tokens werden synchronisiert, sodass es nur noch ein Token gibt.
---
## Aktivitätsbereiche
Unterteilung der Aktivität in Bereich mit gemeinsamen Eigenschaften
 - Gleicher Standort
 - Abteilung
 - ...
**Verändert die Semantik nicht**, nur der Verständlichkeit halber

---

## Vergleich mit BPMN
Business Process Modeling Language
Zeitlich logische Abfolge von Aktivitäten
---
## BPMN Basiselemente
### TODO
---
## BPMN Teilnehmer
 - 1 oder mehrere Teilnehmer
 - Ein Prozess hat 1 Teilnehmer
 - Volle Kontrolle über Prozess
 - Interaktion über Nachrichten
---
Prozessmodell:
	In einem Diagramm ein oder mehrere Prozessmodelle ("Klassen ovn Prozessen")
	
Prozessinstanz: Selbsterklärend, halt ne Instaz von dem Modell

Token ausm Aktivitätsdiagramm

Korrelation:
	Zuordnung von Nachrichten anhand eines Schlüssels ("Betreff") zu einer Instanz
---
## Beispiel
### TODO Draw this with PlantUML
 - Grund für Start
 - Aktionen / AUfgaben sind der Main-Part
 - Zwischenereignis zum Erreichen eines Meilensteins
 - Endereignis und Ergebnis steht dran
---
# TODO Beispiele aus der Vorlesung übernehmen
---
Hier ist die Raute mit + eine Paralellisierung  
Laufzeit bei parallelen Tokens ist immer so lange wie die längste

Raute mit o ist oder und kann eins oder beide ausführen  
Interpretation schwierig
---
BPMN kann Exceptions werfen wenn ein IF keinen validen Pfad hat  
Möglich Sandardpfad mit schrägstrich auf Kante zu setzen

BPMN Lanes sind effektiv das Gleiche wie AD-Aktivitätsbereiche
---
## Hier BPMN Ereignisse ergänzen
---
## BPMN Nachrichten
### TODO Incomplete, ergänzen
Symbol ist Brief

Modellierung ist nicht so super kritisch: Theoretisch auch Aufgabe stattdessen denkbar.  
Nur aufpassen dass man nichts doppelt modelliert.
---
## BPMN Zeit
Logik prinzipiell so wie bei Nachrichten, nur mit Uhrsymbol drinnen.  
Beispiel: Timeout, wiederholende Aufgaben, Timer...
---
## Fehler
Schwerwiegendes Ereignis  
Entweder Endzustand oder unterbrechendes Fehlerereignis, was  in die Fehlerbehandlung springt.
---
## Terminierung
Ausgemalter Kreis mit Umrandung ist Terminierung des gesamten Programmes.
Normaler Kreis mit dickem Rand ist Terminierung des aktuellen Pfades.
---
## Sprungmarken
Vergleichbar mit denen von Aktivitätsdiagrammen.
Nur zur beseseren Übersichtlichkeit, springt vom Fetten Pfeil zum leeren.
---
## Ereignisbasierte Gateways
Komisches Symbol für XOR von Events (todo: bild davon hier einfügen)  
Gleiches gilt fürs ereignisbasierte AND

Beide werden benutzt um Logik mit Ereignissen gut modelliern zu können: Entweder Ereignis A oder B; Paralllel Event-Starts
---
Es ist nicht möglich, das AND an der Stelle wegzulassen, weil sonst jedes Event einzeln stehen würde und beim Aufruf ein extra Token generiert, bzw. einen neuen Prozess startet.
---
## Aufgabentypen
Man kann spezialisieren was eine Aufgabe für einen Typ hat. Dafür Symbol eintragen
### todo, hier mögliche typen visualisieren
---
## Geschäftsregeln
Komplexe Fallunterscheidungen können als Tabelle modelliert werden. An die entsprechende Aufgabe, in der die FU erfolgen soll, wird das Geschäftsregeln symbol gemacht, und dann kann man in einer or danach oder so mit dem Rückgabewert der Gesch#ftsregel arbeiten.
---
## Pools
Verschiedene Lanes, und ein Übergang von einer Lane zu einer anderen stellt die Kontrollflussübergabe dar, die man dann nicht mehr explizit extra modellieren muss.

Funktioniert trotzdem noch so wie Lanes (bzgl. Aufgabentrennung etc)
---
## Pools vs Nachrichten
Vereinfacht:

Pools ein Thread, eine Aufgabe, die aber verteilt gelöst wird.

Nachrichtenflüsse können Pools überschreiten, Sequenzflüsse nicht. Damit haben Nachrichtenflüsse zwar mehr Möglichkeiten, sind aber "unschöner" und sollte nicht verwendet werden wenn man dort auch Pools nehmen könnte.

---

# Statecharts / Automaten
---
###todo beispiel statechart abbilden
---
### Aufgaben eines Statecharts
 - Lebenszyklus Objekt darstellen
 - Implementierungsbeschreibung
 - Abstrake Anforderungsbeschreibung
 - Erlaubte Aufrufreihenfolgen darstellen
 - Mögliches / Erlaubtes Verhalten darstellen
 - Bindeglied Zustand- und Verhaltensbeschreibung
---
### TODO Automatentheorie ergänzen
---

