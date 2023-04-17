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
Das kann gemessen werden und so weiß man __analog__ wie man sich gerade so beweg
---
### ADC - Schrittweise Annäherun
Digitalwert wird approimated weil es nicht auf die "zehnte Nachkomastelle" ankommt...
---
## PWM
Wie der Name sagt: Die Länge eines Pulses (HIGH) wird moduliert, bzw. Verhältnis HIGH / LOW  
Wird allgemein als Prozentzahl angegeben
`$$ C_M^ U $$`
