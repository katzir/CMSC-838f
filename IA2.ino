void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  
  // send the value of analog input 0:
  Serial.println("A,"+ String(analogRead(A0)));
  Serial.println("B,"+  String(analogRead(A1)));
  Serial.println("C,"+  String(analogRead(A2)));
  Serial.println("dig11,"+ String(digitalRead(11)));
  Serial.println("dig12,"+ String(digitalRead(12)));
  // wait a bit for the analog-to-digital converter 
  // to stabilize after the last reading:
  delay(10);
}


