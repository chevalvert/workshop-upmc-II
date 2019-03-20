/*
  Utiliser un bouton-pressoir pour contrôler un signal d'entrée `digital input` 
  pour allumer et éteindre le LED.

  Connecter un côté du bouton-poussoir à GND et l’autre côté à une broche numérique. 
  Quand on appuie sur le bouton poussoir, la broche sera connectée à GND, 
  et sera donc lue comme "LOW" par l'Arduino.

  Ainsi, l’état de `digital pin 2` sera `LOW` lorsque le bouton sera appuyé 
  et `HIGH` quand il ne sera pas appuyé.
*/


int button1Pin = 2;   // Le bouton-poussoir est connecté au pin digital 2
int ledPin = 13;      // Le LED est connecté au digital pin 13

int button1State;     // Déclaration d'une variable entière pour stocker l'état du bouton-poussoir 


void setup() {
  // commandes exécutées une seule fois, au lancement du programme   
  pinMode(button1Pin, INPUT);   // pour utiliser la broche 2 pour connaître l'état du bouton-poussoir il faut la configurer comme une entrée
  pinMode(ledPin, OUTPUT);      // pour utiliser la broche 13 pour allumer une LED il faut la configurer comme sortie 
}

void loop() {
  button1State = digitalRead(button1Pin);    // button1State va lire la valeur venant du button1Pin, qui sera HIGH ou LOW en fonction de l'état du bouton-pressoir
  
  if (button1State == HIGH){     // si l'état du bouton-pressoir est HIGH, donc non poussé
    digitalWrite(ledPin, HIGH);  // allume le LED
  }
  else {                        // sinon, si l'état du bouton-pressoir est LOW, donc poussé
    digitalWrite(ledPin, LOW);  // éteint le LED
  }
}



