int ledGas = 8;
int ledVoda = 7;
int buzzer = 6;

const int pin4 = 9;
const int aPin0 = A0;
const int aPin1 = A1;

int MQ135 = 140;
int val_analog;

int sensorValue;

void setup() {
  pinMode(ledGas, OUTPUT);
  pinMode(ledVoda, OUTPUT);
  pinMode(pin4, INPUT);
  pinMode(aPin0, INPUT);
  pinMode(aPin1, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  val_analog = analogRead(aPin0);
  //  Serial.print("Pin A0 (senzor vode) vrednost: ");
  //  Serial.print(val_analog);
  //  Serial.println("");
  delay(5000);

  sensorValue = analogRead(A1);

  if (val_analog < 1000 && sensorValue > MQ135) {    // Ako je mokro i detektujes gasove uradi:
    digitalWrite(ledVoda, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(ledVoda, LOW);
    digitalWrite(buzzer, LOW);
    delay(100);
    digitalWrite(ledGas, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(ledGas, LOW);
    digitalWrite(buzzer, LOW);
    delay(100);
  }

  else {
    if (digitalRead(A0) == LOW)  {                   // Ako A0 vrati LOW, znaci da ima vode
      Serial.print("Voda: ");
      Serial.println("Mokro");
      digitalWrite(ledVoda, HIGH);
      digitalWrite(buzzer, HIGH);
      delay(100);
      digitalWrite(buzzer, LOW);
      delay(100);

    }
    else  {                                          // Ako A0 vrati HIGH, znaci da je suvo
      Serial.print("Voda: ");
      Serial.println("Suvo");
      digitalWrite(ledVoda, LOW);
      delay(100);
    }

    if (sensorValue > MQ135) {                       // Ako senzor detektuje vrednost vecu od MQ135 na A1, znaci da ima dima
      Serial.print("Gasovi / dim: ");
      Serial.print(sensorValue, DEC);
      Serial.print(" PPM / ");
      Serial.println("Gasovi prisutni");
      digitalWrite(ledGas, HIGH);
      delay(100);
    }
    else {                                           // U suprotnom, nema dima
      Serial.print("Gasovi / dim: ");
      Serial.print(sensorValue, DEC);
      Serial.print(" PPM / ");
      Serial.println("Gasovi odsutni");
      digitalWrite(ledGas, LOW);
      delay(100);
    }
    Serial.println("---------------------");
    delay(100);
  }
}
