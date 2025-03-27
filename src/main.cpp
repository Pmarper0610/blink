#include <Arduino.h>

bool state = false;
int contador=0;

int antes = millis();

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  int ahora = millis();
  if (ahora - antes > 200) {
    state = !state;
    digitalWrite(LED_BUILTIN, state);
    Serial.println("Cambio de estado");
    antes = ahora;
  }
  Serial.println(contador++);
}