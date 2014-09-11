const int piezo = A0;
const int yellowLed = 3;
const int greenLed = 4;
const int redLed = 5;
int knockVal;

void setup() {
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.begin(9600);
  Serial.println("Begin");
}

void loop() {
  
  knockVal = analogRead(piezo);
  Serial.println(knockVal);
  if(knockVal > 500) {
    digitalWrite(redLed, HIGH);
    delay(100);
    digitalWrite(redLed, LOW);
  }
  else if(knockVal > 250) {
    digitalWrite(yellowLed, HIGH);
    delay(100);
    digitalWrite(yellowLed, LOW);
  }
    
  else if(knockVal > 100) {
    digitalWrite(greenLed, HIGH);
    delay(100);
    digitalWrite(greenLed, LOW);
  }
  delay(100);

}
