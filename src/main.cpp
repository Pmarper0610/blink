#include <Arduino.h>
#define LED 13

bool state = false;
int contador=0;

int antes = millis();

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  int ahora = millis();
  if (ahora - antes > 1000) {
    state = !state;
    digitalWrite(LED, state);
    Serial.println("Cambio de estado");
    antes = ahora;
  }
  Serial.println(contador++);
}
