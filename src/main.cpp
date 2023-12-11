#include <Arduino.h>
#include <Wire.h>>

void setup() {
  Serial.begin(115200);
  while (!Serial) {}  // wait for Serial comms to become ready
  
  Serial.println("Start proyect one");
}

void loop() {
  Serial.println("One /n");
}

