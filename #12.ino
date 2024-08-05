#include<Arduino.h>
//code to read voltage varied by a potentiometer 
int volt=A2;
int readVal;
float V2;
void setup() {
Serial.begin(9600);
// put your setup code here, to run once:

}
void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(volt);
V2=(5./1023.)*readVal;
Serial.println(V2);
delay(250);
}
