/*
  Utiliser deux boutons-pressoir pour créer un signal d'entrée `digital input` 
  pour allumer le LED.

  Connecter un côté du bouton-poussoir à GND et l’autre côté à une broche numérique. 
  Quand on appuie sur le bouton poussoir, la broche sera connectée à GND, 
  et sera donc lue comme "LOW" par l'Arduino.

  Ainsi, l’état de `digital pin 2` sera `LOW` lorsque le bouton sera appuyé 
  et `HIGH` quand il ne sera pas appuyé.
*/


const int button1Pin = 2;   // Le bouton-poussoir 1 est connecté au pin digital 2
const int button2Pin = 3;   // Le bouton-poussoir 2 est connecté au pin digital 3
const int ledPin =  13;     // Le LED est connecté au digital pin 13

int button1State, button2State;     // Déclaration de deux variables entières pour stocker l'état des boutons-poussoirs


void setup(){
  // commandes exécutées une seule fois, au lancement du programme

  // Configuration des broches des boutons-pressoirs comme des entrées
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);

  // Configuration de la broche du LED comme une sortie
  pinMode(ledPin, OUTPUT);      
}

void loop(){
  
  // lecture des valeurs venant des broches des boutons-pressoirs, qui seront HIGH (btn non appuyé) ou LOW (btn appuyé)
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

  // si button1 ou button2 sont appuyés (mais pas les deux en même temps)
  if (((button1State == LOW) && (button2State == HIGH)) || ((button1State == HIGH) && (button2State == LOW))) {
    digitalWrite(ledPin, HIGH); // allume le LED
  }
  else {  // sinon, si ni button1 ni button2 sont appuyés
    digitalWrite(ledPin, LOW);  // éteint le LED
  }
}
