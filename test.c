// Pin connected to the LED
const int ledPin = 9;

void setup() {
    // Set the LED pin as an output
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // Increase the brightness of the LED gradually
    for (int brightness = 0; brightness <= 255; brightness++) {
        analogWrite(ledPin, brightness);
        delay(10);
    }
    
    // Decrease the brightness of the LED gradually
    for (int brightness = 255; brightness >= 0; brightness--) {
        analogWrite(ledPin, brightness);
        delay(10);
    }
}