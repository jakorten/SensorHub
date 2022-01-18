/*
  Test Sketch to see if the pins for i2c ports of SensorHub work well.

  J.A. Korten
  Jan 16, 2022
*/
#include "pinTestHelper.h"
#include "twiObjectHelper.h"

// Not used for now:

#define sclLED0 27 // PA23
#define sdaLED0 26 // PA22
#define sclLED1 13 // PA16
#define sdaLED1 11 // PA17
#define sclLED2 39 // PA13
#define sdaLED2 28 // PA12

TwiPinPair portBackbone = TwiPinPair(sclLED0, sdaLED0);
TwiPinPair portSensorsA = TwiPinPair(sclLED1, sdaLED1);
TwiPinPair portSensorsB = TwiPinPair(sclLED2, sdaLED2);

/*
TwiPinPair portBackbone = TwiPinPair(PIN_PA12, PIN_PA13);
TwiPinPair portSensorsA = TwiPinPair(PIN_PA22, PIN_PA23);
TwiPinPair portSensorsB = TwiPinPair(PIN_PA16, PIN_PA17);
*/

void setup() {
  initSerial();
  initialSetPins();

  for (int i = 0; i < 50; i++) {
    pinModeTest(i, HIGH);
  }
}

void loop() {
  invertAllPorts();
  delay(500);
}

void initSerial() {
  delay(500);
  Serial.begin(115200);
  delay(500);
  while(!Serial);
}
