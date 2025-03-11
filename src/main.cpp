#include <Arduino.h>
#define LED 13

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  delay(100);
  digitalWrite(LED,LOW);
  delay(1000);
  Serial.print("funciona.");
}          