# Datenbanken

---

## Viel Stuff der noch ergänzt werden muss

---

## SQL - Überblick
---
### Aufgaben der SQL
Data Definition Language (DDL) -> Create ...  
Data Manipulation Language (DML) -> Select/Insert/Update/Delete...  
Data Control Language (DCL) -> Grant ...
---
### Syntax
Befehl endet mit Semikolon -> Zeilenwechsel zwischendrin ez  
Bezeichner: alphanumerisch + _  
Nicht erlaubt: Nur Zahlen, /,\\, .  
Schwierig: Sonderzeichen wie ä...
---
Länge Bezeichern max. 64 Zeichen  
keywords nicht case sensitive, bezeichner schon

Verschachtelung möglich, select returned relation auf die wieder selected werden kann
Note:
Eckige Klammern sind in der Syntaxspezifikation nur dazu da um zu zeigen was wo rein kann.
Beim eigentlichen Code natürlich einen der vorgeschlagenen Werte auswählen und Klammern weglassen.
Senkrechte Striche sind oder.
... heißt kann beliebig oft wiederholt werden.
Geschweifte Klammern: Einer der Werte ***muss*** angegeben werden.
---
## Datenbanken verwalten
---
### Anlage einer Datenbank
```sql
CREATE {DATABASE | SCHEMA} [IF NOT EXISTS] db_name
[create_specification [, create_specification] ...]

create_specification:
[DEFAULT] CHARACTER SET [=] charset_name
| [DEFAULT] COLLATE [=] collation_name
```
IF NOT EXISTS wichtig  
anscheinend werden einfach daten zur alten tabelle ge-addet wenns die tabelle beim create schon gibt
gibt zwar ne warning, funktioniert aber
---
COLLATE ist Sortierreihenfolge, definiert über einen Zeichensatz.
Basically welches Zeichen welche Priorität hat.
---
### Anzeigen vorhandener Dbs
# TODO Incomplete
SHOW SCHEMA
---
### Auswahl einer Datenbank
```sql
USE db_name;
```

Einmal auswählen, dann werden normalerweise alle folgenden erstmal darauf angewendet.
---
### Löschen einer DB
```sql
DROP {DATABAES  | SCHEMA} [IF EXISTS] db_name;
```

Löscht eine Datenbank, database und schema synonym
---
## Tabellen verwalten
---
### Create Table
# TODO INCOMPLETE

CREATE TABLE...

Legt neue Tabelle an...
---
Spalten definieren indem man col names im create table anlegt  
Außerdem constraints angeben  
---
### Constraints
# TODO Alle constraints richtig aus folien übernehmen
 - [NOT NULL | NULL]
 - [DEFAULT default_value]
 - [AUTO_INCREMENT]
 - [UNIQUE [KEY] | [PRIMARY] KEY]
 - [COMMENT 'string']
 - [FOREIGN KEY]
 - CHECK

Note:
NULL heißt ich treffe keine Aussage über etwas. Es heißt nicht, dass da nichts steht, sondern
eben nur, dass ich keine Aussage darüber treffe
---
#### Primary Key
Entweder direkt hinter ein Attribut  
***PRIMARY KEY MIT LEERZEICHEN!***  
Oder nach unten, und dann auch ez mit mehreren Attributen kombinieren  
Automatisch NOT NULL
---
#### Auto Increment
***AUTO_INCREMENT MIT UNTERSTRICH!***
Zählt halt hoch, schön für künstliche Schlüssel  
Erhöht den höchsten Zahlenwert um 1  
Triggerbar mit 0, DEFAULT, NULL
---

