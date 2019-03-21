/* 
 * sensoShield n2
 * SensorShieldlib Lionel Radisson - @Makio135
 * https://github.com/MAKIO135/sensorShieldLib
 */

///// LIBRARY /////

#include <sensorShieldLib.h>
SensorShield board;


///// DECLARE SENSOR'S AND OTHER PINS /////

int lightPin = A0;  // LDR pin
int ledPin = 11;    // led pin

///// VARIABLES FOR THE OUTPUTS /////

// LED variables
int lightLevel;
int mappedLightLevel;


void setup() {
  // initialises and start Serial with 9600 baudrate
  board.init();

  // add analog sensors to sensorShield
  board.addSensor("capteurLDR", A0);

  // LED display
  pinMode(ledPin, OUTPUT);
}


void loop() {
  // read the value, if there are changes update it and send it through serial
  board.update();

  // turn on the led on the shield with LDR input values
  lightLevel = analogRead(lightPin);
  mappedLightLevel = map(lightLevel, 150, 650, 0, 255);
  analogWrite(ledPin, mappedLightLevel);
}






