

#include <Arduino.h>
#include <Wire.h>
#include <MCP342x.h>

MCP342x MCP(0x68);
long Voltaje;
void setup() {
  Serial.begin(115200);
  while (!Serial) {}  // wait for Serial comms to become ready
  Serial.println("Start Proyect");

  MCP.begin(0);
  MCP.setConfiguration(CH1,RESOLUTION_16_BITS,ONE_SHOT_MODE,PGA_X1);

}

void loop() {
  MCP.newConversion();
  Voltaje=MCP.measure();
  Serial.print("Voltaje = "); // print result
  Serial.print(Voltaje);
  Serial.println(" nanoVolt");
  delay (1000);

}

