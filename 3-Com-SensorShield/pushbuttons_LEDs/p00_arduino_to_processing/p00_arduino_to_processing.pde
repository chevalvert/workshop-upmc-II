/* 
 * sensoShield n2
 * SensorShieldlib Lionel Radisson - @Makio135
 * https://github.com/MAKIO135/sensorShieldLib
 */

import processing.serial.*;

////// SENSORSHIELD //////  

Serial myPort;
JSONObject json;


////// VARIABLES CAPTEURS INPUT //////

int btnLeft;
int btnRight;
int btnTop;
int btnBottom;


void setup() {
  size( 750, 600 );
  strokeWeight(5);
  textAlign(CENTER);
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
        btnLeft = json.getInt("bouton1");         
        btnRight = json.getInt("bouton2");
        btnTop = json.getInt("bouton3");
        btnBottom = json.getInt("bouton4");
      } 
      catch ( Exception e ) {
        e.printStackTrace();
      }
    }
  }
  // draw with values from sensorShield
  dataVis();
}