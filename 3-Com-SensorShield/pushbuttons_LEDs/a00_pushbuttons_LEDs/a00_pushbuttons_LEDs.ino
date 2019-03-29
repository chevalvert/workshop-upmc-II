/*
  SensorShieldlib Lionel Radisson - @Makio135
  https://github.com/MAKIO135/sensorShieldLib

  Utiliser quatre boutons-pressoir pour créer un signal d'entrée `digital input`
  pour allumer les LEDs.

  Connecter un côté du bouton-poussoir à GND et l’autre côté à une broche digitale.
  Quand on appuie sur le bouton poussoir, la broche sera connectée à GND,
  et sera donc lue comme "LOW" par l'Arduino.

  Ainsi, l’état de `digital pin 2` sera `LOW` lorsque le bouton sera appuyé
  et `HIGH` quand il ne sera pas appuyé.
*/

///// LIBRARY /////

#include <sensorShieldLib.h>
SensorShield board;

const int button1Pin = 2;   // Le bouton-poussoir 1 est connecté au pin digital 2
const int button2Pin = 3;   // Le bouton-poussoir 2 est connecté au pin digital 3
const int button3Pin = 4;   // Le bouton-poussoir 2 est connecté au pin digital 4
const int button4Pin = 5;   // Le bouton-poussoir 2 est connecté au pin digital 5

const int ledPin1 =  9;     // Le LED est connecté au digital pin 13
const int ledPin2 =  10;     // Le LED est connecté au digital pin 13
const int ledPin3 =  11;     // Le LED est connecté au digital pin 13
const int ledPin4 =  12;     // Le LED est connecté au digital pin 13

int button1State, button2State, button3State, button4State;     // Déclaration de quatre variables entières pour stocker l'état des boutons-poussoirs


void setup() {
  // commandes exécutées une seule fois, au lancement du programme

  // initialises and start Serial with 9600 baudrate
  board.init();

  // add sensors to sensorShield
  board.addSensor("bouton1", 2);
  board.addSensor("bouton2", 3);
  board.addSensor("bouton3", 4);
  board.addSensor("bouton4", 5);

  // Configuration de la broche du LED comme une sortie
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {

  // read the value, if there are changes update it and send it through serial
  board.update();

  // lecture des valeurs venant des broches des boutons-pressoirs, qui seront HIGH (btn non appuyé) ou LOW (btn appuyé)
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);
  button3State = digitalRead(button3Pin);
  button4State = digitalRead(button4Pin);

  // si button1 sont appuyés
  if (button1State == LOW) {
    digitalWrite(ledPin1 , HIGH); // allume le LED
  }
  else if (button2State == LOW) {
    digitalWrite(ledPin2 , HIGH); // allume le LED
  }
  else if (button3State == LOW) {
    digitalWrite(ledPin3 , HIGH); // allume le LED
  }
  else if (button4State == LOW) {
    digitalWrite(ledPin4 , HIGH); // allume le LED
  }
  else {  // sinon, si les boutons ne sont pas appuyés
    digitalWrite(ledPin1, LOW);  // éteint le LED
    digitalWrite(ledPin2, LOW);  // éteint le LED
    digitalWrite(ledPin3, LOW);  // éteint le LED
    digitalWrite(ledPin4, LOW);  // éteint le LED
  }
}
