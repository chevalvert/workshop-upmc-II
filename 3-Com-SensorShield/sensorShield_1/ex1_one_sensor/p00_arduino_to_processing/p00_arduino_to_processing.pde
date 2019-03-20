/* 
 * sensoShield n1
 * SensorShieldlib Lionel Radisson - @Makio135
 * https://github.com/MAKIO135/sensorShieldLib
 */

import processing.serial.*;

////// SENSORSHIELD //////  

Serial myPort;
JSONObject json;


////// VARIABLES CAPTEURS INPUT //////

float lightValue;         // LDR light


////// VARIABLES OUTPUT //////

float mappedLightValue;


void setup() {
  size( 750, 600 );
  printArray( Serial.list() );
  myPort = new Serial( this, Serial.list()[5], 9600 ); // indicate your arduino port
  myPort.clear();
}


void draw() {
  // read sensorShield
  while ( myPort.available() > 0 ) {
    String data = myPort.readStringUntil( '\n' );
    if ( data != null ) {
      println( data ); 
      try {
        json = JSONObject.parse( data );
        // get the values of your sensors from serial (arduino)
        lightValue = json.getInt("capteurLDR");         
      } 
      catch ( Exception e ) {
        e.printStackTrace();
      }
      dataVis();
    }
  }
}