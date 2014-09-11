const int piezo = A0;
int knockVal;

void setup() {
  Serial.begin(9600);
  Serial.println("Begin");
}

void loop() {
  
  knockVal = analogRead(piezo);
  Serial.println(knockVal);
  delay(1000);

}
