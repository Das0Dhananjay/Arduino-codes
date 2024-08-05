int readPin=A3;
float V2=0;
int readVal;
int delayTime = 500; 
void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  readVal =analogRead(readPin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  delay(250); 
  analogWrite(11,150);


}
  // put your main code here, to run repeat