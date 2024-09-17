#include <Arduino.h>

const int ledPin = 11;
int val = 0;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    for (val = 0; val <= 255; val++) 
    {
        analogWrite(ledPin, val);
        delay(1000); // Delay for 1 second
    }
}