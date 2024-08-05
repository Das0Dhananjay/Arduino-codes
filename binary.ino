int dly =1000;
int greenLED=2;
int blueLED=3;
int redLED=4;
int yellowLED=5;
void setup() {
  pinMode(greenLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(redLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
  delay(dly);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
  delay(dly);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,LOW);
  delay(dly);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,HIGH);
  delay(dly);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
  delay(dly);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
  delay(dly);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,LOW);
  delay(dly);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,HIGH);
  delay(dly);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
  delay(dly);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
  delay(dly);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,LOW);
  delay(dly);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,HIGH);
  delay(dly);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
  delay(dly);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
  delay(dly);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,LOW);
  delay(dly);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,HIGH);
  delay(dly);




  // put your main code here, to run repeatedly:

}