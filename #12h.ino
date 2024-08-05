int a;
int c=12;
int d=11;
float b;
void setup() {
  pinMode(A2,INPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  a=analogRead(A2);
  b=(5./1023.)*a;
  if (b>=4.0){
    digitalWrite(c,HIGH);
  }
  if (b<=4.0){
    digitalWrite(c,LOW);
  }
  if (b>=3.0 && b<=4.0){
    digitalWrite(d,HIGH);
  }
  if (b<=3.0){
    digitalWrite(d,LOW);
  }
  if (b>=4.0){
    digitalWrite(d,LOW);
  }  
  Serial.println(b);
  delay(250);
  // put your main code here, to run repeatedly:

}
