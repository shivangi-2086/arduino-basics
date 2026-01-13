// LED Blinking Program
// Simulation-based Arduino program using Tinkercad

int ledPin = 13;   // Built-in LED pin

void setup() {
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED ON
  delay(1000);                // Wait for 1 second
  digitalWrite(ledPin, LOW);  // Turn LED OFF
  delay(1000);                // Wait for 1 second
}
