## Rechnerstrukturen
Wissenschaft, Informationen systematisch zuz verarbeiten  
Insbesondere das Automatisieren mit der Hilfe digitaler Computer
---
### Definitionen
Eingebettetes System: Computer ist in und interagiert mit einem technischen System  
Gegenteil: Self-contained system  
Kontinuierlich: Im Grunde Kurve  
Diskret: Aufsplitten der Kurve in einzelne Balken/Punkte...  
Monolitisch: Ein riesen Klotz 
Verteilt: Name sagts schon...  
---
### 3 Schichten
ISA: Programmierer / Compiler
Mikroarchitektur: Prozessor Designer, implementiert ISA  
Schaltung: Elektotechnische Sicht, Gatter etc
---
### Wärmeabgabe-Problem
Heutige Prozessoren sind zunehmend nicht mehr durch die Anzahl Transistoren limitiert sondern eher dadurch, dass die Hitze effektiv nicht mehr abgegeben werden kann. Die Energiedichte moderner Prozessoren nähert sich der der Oberfäche der Sonne an.
---
### Lösung: Multicore
Anstatt die Frequenz zu erhöhen (Powerwall) einfach mehrere, parallele Kerne!  
---
### Arten von Parallelismus
Data-level parallelism (DLP): Mehrere Datenobjekte auf denen gleichzeitig gearbeitet werden kann.

Task/Thread-level parallelism (TLP): Mehrere "Aufgaben", die unabhängig voneinander und größtenteils parallel ablaufen.

---

## Ganz viel stuff den ich noch ergänzen muss
...

---

## I/O
Daten kommen rein oder raus
Input: Keyboard, Mouse, Sensor(s)
Output: Display, Sound
---
## Stuff aufm Dev-Board
 - DMA: Direct Memory Access
 - Watchdog Timer: Heartbeat Funktion
 - Prescaler: Kann Clock "scalen"
 - I2C: Bekannt, wichtig dass mehrere devices gehen
 - SPI: Serial Peripheral Interface
 - ADC: Analog Digital Converter
 - UART: Universal asynchronous receiver-transmitter (notes)
Note:
UART:
A universal asynchronous receiver-transmitter (UART /ˈjuːɑːrt/) is a computer hardware device for asynchronous serial communication in which the data format and transmission speeds are configurable. It sends data bits one by one, from the least significant to the most significant, framed by start and stop bits so that precise timing is handled by the communication channel. The electric signaling levels are handled by a driver circuit external to the UART. Two common signal levels are RS-232, and RS-485. Early teletypewriters used current loops. 
---
Erweiterbares Bus System

Datenleitung, Strom
---
## Peripherien
 - System Peripheriegeräte: GPIO, Timer
 - Serielle Peripheriegeräte: UART,I2C,SSI/SPI,CAN,USB
 - Analoge Peripheriegeräte: ADC
 - Bewegungssteuerungs-Peripheriegeräte: PWM
---
## ADC
Umwandlung von Signalen in Zahlendarstellung für numerische Weiterverarbeitung  
Von zeitkontinuierlichen Signalen in zeitdiskrete / wertdiskrete  
"Sample and hold" Schaltung  
***Wichtig: Nyquist-Shannon-Abtasttheorem***
Note:
Der aktuelle Wert wird für eine bestimmte Zeit zwischengespeichert. Kurze Impulse können verloren gehen (...abtasttheorem). 
---
### ADC - Beschelunigungssensor
Kondensatoren, die sich je nach Neigung einander mehr oder weniger annähren.  
Das kann gemessen werden und so weiß man __analog__ wie man sich gerade so bewegt
---
### ADC - Schrittweise Annäherun
Digitalwert wird approximated weil es nicht auf die "zehnte Nachkomastelle" ankommt...
---
## PWM
Wie der Name sagt: Die Länge eines Pulses (HIGH) wird moduliert, bzw. Verhältnis HIGH / LOW  
Wird allgemein als Prozentzahl angegeben
`$$ C_M^ U $$`

---

## Interrupts - Unterbrechung
Gegenteil von Polling (zyklisches Abfragen von Zuständen)

Note:
Er sagt maximal 2-3 Interrupt Ebenen. Sonst zu unübersichtlich.
---
## Sinn und Zweck von Interrupts
 - Polling vermeiden
 - Behandlung externer Ereignisse
 - Behandlung von internen Fehlsituationen
---
## Interrupt Klassen
 - Software-Interrupts
 - Timer
 - I/O
 - Hardware-Fehler
---
## Wozu Interrupts
 - Effizienz (Wartezeiten können vermieden werden)
 - Bessere Programmlogik
 - Polling vermeiden
---
## Funktionsweise
1. Laufender Prozess wird angehalten (Nach aktuellem Befehl)
2. Aktuelle Position wird gespeichert
3. Sprung in Interrupt-Handler
4. Sprung zurück (Programm Counter + 1)
---
## Mehrfach Interrupts
 - Während Abarbeitung alle weiteren Ausschließen
 - Während Abarbeitung andere zulassen
 - Interrupt-Prioritäten: Nur Interrupts höherer Priorität unterbrechen solche mit niedrigerer

Note:
Prioritäten können sich ändern.
---
### Interrupt Service Routine (ISR)
 - Muss im Speicher geladen sein
 - Eintrag in Interrupt Vektor Tabelle mus explizit erfolgen
 
 ISR muss:
  - Register und Flags retten
  - Register und Flags restaurieren
  - Interrupt return ausführen
---
## Timer
```
while() {
	LED_toggle();
	delay(1000);
}
```

Mikrocontroller kann viel mehr als das in 1s. Lieber Interrupt erstellen.
---
## Interrupt Vektor Tabelle
Enthält 32Bit-Worte auf die Speicheradressen wo die ISRs stehen.  
Unebkannte ISRs müssen über IMPORT erst importiert werden.  
Routine muss an richtiger Stelle in Tabelle stehen, sonst crash

---

## Speicher
Datenspeicher  
Hauptspeicher
"Bios-Speicher" -> Grundfunktionen
---
#TODO Speicher Pyramide Klausur (Memory Hierarchy)
---
## Speichertypen
 - RAM (Schreib-Lesespeicher)
 - ROM (Festwertspeicher)
 - Flash (Einstellungen)
---
### RAM
Flüchtig  
Statische RAM (Flip-Flop)

Dynamische RAM (Kondensatoren) (refresh notwendig, leckströme)
  - EDO-RAM
  - SDRAM
  - DDR-SDRAM

Statisch-dynamischer RAM (Kondensatoren im Flip-Flop-Pelz)
---
Darstellung von DRAM SIEHE VORLESUNGSFOLIEN  
Speicherzugriff DRAM auch
---
## Berechnung Latenz DRAM
Faustformel:
`$$ RamLatency = \frac{CL*2000} {DR} $$`

Relevanz: Bei Desktop Nutzern ist die Latenz, so lange sie sich in einem "normalen" bereich befindet, irrelevant. Bei riesigen Serverfarmen kann das jedoch anders aussehen.
---
## Berechnungen DRAM
`$$ t_{Refresh cycle} = \frac{Takte}{f} $$`
`$$ t_{Refresh} = t_{Refresh cycle} * Rows $$`
`$$ Refresh Overhead = \frac{t_{refresh}}{Refresh interval} $$`
---
## ROM
Read only  
Nicht flüchtig  
PROM: Einmal programmierbar  
EPROM: Erasable ROM (UVLicht)  
EEPROM: Electrically erasable ROM  
Flash ROM: "Fast nicht flüchtiges RAM"
---
### TODO Klausur Refresh-Overhead Zeug DRAM rechnen können
### und Statischer RAM IMMER FLIP FLOPS (wissen woraus welcher speicher ist)
### allgemein folie speicheigenschaften kennen
---
## EPROM
Wird durch UV-Licht ge-wiped  
---
## Flash ROM (KLAUSURRELEVANT)
Speichermedium: Floating Gate Zelle  
Schreib und löschbar  
Begrenzte Lebensdauer  
günstig aber langsame

---

## Verteilte Systeme
---
## verschiedene definitionen übernehmen
---
Treten häufig auf in:
 - Finanzbereich
 - Informationsdienste
 - Entertainment
 - Health
 - Bildung
 - Logistik
---
## Heterogene vs homogene Systeme
### KLAUSUR-RELEVANT  
Alles eine Art von System (homogen)  
Unterschiedliche arten, untercheidliche software etc (heterogene)
---
### Transparenzzeug
aus folien übernehmen
---

