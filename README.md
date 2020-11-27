# Senzor vode i dima

Senzor vode i dima za Muzej hemije koji se nalazi na Hemisjkom fakultetu, Univerzitet u Beogradu.  
Detekcija vode aktivira jednu diodu i buzzer.  
Detekcija neželjenog dima ili gasa, aktivira drugu diodu.  
Ukoliko senzori registruju i vodu i gas, aktivira se blink dioda i buzzer.  



## Komponente

1. Arduino Uno/Pro/Mini/Micro/Nano
2. MQ135 Gas Sensor
3. Rain Sensor Module
4. Dve diode različitih boja
5. Dva otpornika 120 Ohm
6. Aktivni buzzer

## Povezivanje

Arduino - MQ135  
5V - VCC  
GND - GND  
A1 - AO (Analog Out)  
  
Arduino - Rain Sensor Module  
5V - VCC  
GND - GND  
A0 - AO (Analog Out)  
Pin 4 - DO (Digital Out)  
  
Arduino - LED  
Pin 9 - 120 Ohm Resistor - Anode (+)  
GND - Cathode (-)  
Pin 8 - 120 Ohm Resistor - Anode (-)  
GND - Cathode (-)  
  
Arduino - Buzzer  
Pin 7 - Anode (+)  
GND - Cathode (-) 

## Disclaimer

Kod koristite na sopstvenu odgovornost.
Pre upotrebe, potrebno je kalibrisati senzore pomoću malih potenciometara koji se nalaze na njima.