const int buzzer = 9;

void setup() {

  Serial.begin(9600);
  pinMode(6, INPUT);

  pinMode(buzzer, OUTPUT);
}

void loop() {
 
  if (digitalRead(6) == HIGH) {
    Serial.println("Active");
   
    tone(buzzer, 1000);
    delay(500);
    noTone(buzzer);
    delay(500);
  }
  else {
    Serial.println("Inactive");
  }



}
