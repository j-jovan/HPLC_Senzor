# HPLC_Senzor

Kod za senzor vode i gasova koji ce biti ugrađen u HPLC (High Pressure Liquid Chromatography) uređaj koji se nalazi na Hemijskom fakultetu, Univerzitet u Beogradu.
Ako HPLC izbaci vodu, aktiviraće se jedna dioda.
Ako HPLC proizvede neželjeni dim ili gas, aktiviraće se druga dioda.
Ukoliko senzori registruju i vodu i gas, naizmenično se uključuju i isključuju obe diode.
U planu je dodavanje buzzer-a radi zvučnog obaveštavanja korisnika da nešto nije u redu.


## Komponente

1. Arduino Uno/Pro/Mini/Micro/Nano
2. MQ135 Gas Sensor
3. Rain Sensor Module
4. Dve diode različitih boja

## Povezivanje

Arduino - MQ135 
5V - VCC
GND - GND
A1 - AO (Analog Out)

Arduino - Rain Sensor Module
5V - VCC
GND - GND
A0 - AO (Analog Out)
4 - DO (Digital Out)

Arduino - LED
13 - 120 Ohm Resistor - Anode (+)
GND - Cathode (-)
12 - 120 Ohm Resistor - Anode (-)
GND - Cathode (-)

## Disclaimer

Kod koristite na sopstvenu odgovornost.
Pre upotrebe, potrebno je kalibrisati senzore pomoću malih potenciometara koji se nalaze na njima.