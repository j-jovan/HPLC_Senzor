
int ledGas = 13;
int ledVoda = 12;

const int pin4 = 4;
const int aPin0 = A0;
const int aPin1 = A1;
int val_analog;

int sensorValue;

void setup() {
  pinMode(ledGas, OUTPUT);
  pinMode(ledVoda, OUTPUT);
  pinMode(pin4, INPUT);
  pinMode(aPin0, INPUT);
  pinMode(aPin1, INPUT);
  Serial.begin(9600);
}


void loop() {



//if((A0) == 


  if (digitalRead(A0) == LOW)  {
    Serial.println("Mokro");
    digitalWrite(ledVoda, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);

  }
  else  {
    Serial.println("Suvo");
    digitalWrite(ledVoda, LOW);
    delay(100);
  }
  val_analog = analogRead(aPin0);
  Serial.print("Analog value : ");
  Serial.println(val_analog);
  Serial.println("");
  delay(1000);


  sensorValue = analogRead(A1);
  Serial.print(sensorValue, DEC);
  Serial.println(" PPM");
  if (sensorValue > 140) {
    Serial.println("Gasovi prisutni");
    digitalWrite(ledGas, HIGH);
    delay(100);
  }
  else {
    Serial.println("Gasovi odsutni");
    digitalWrite(ledGas, LOW);
    delay(100);
  }
  delay(100);





  //  digitalWrite(ledGas, HIGH);   // turn the LED on (HIGH is the voltage level)
  //  delay(100);                       // wait for a second
  //  digitalWrite(ledGas, LOW);    // turn the LED off by making the voltage LOW
  //  delay(100);
  //  digitalWrite(ledVoda, HIGH);   // turn the LED on (HIGH is the voltage level)
  //  delay(100);
  //  digitalWrite(ledVoda, LOW);   // turn the LED on (HIGH is the voltage level)
  //  delay(100);   // wait for a second
}
