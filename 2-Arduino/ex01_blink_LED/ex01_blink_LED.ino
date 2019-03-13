/*
Programme pour faire clignoter le LED connecté à la broche digitale 13.

  Matériel :
    - Arduino Uno
    - LED
    - Résistance 330 ohm
    - Breadboard
    - Câbles

  Connectique :
    - LED + connecté au pin 13
    - LED — connecté à la résistance 220 ohm
    - Résistance 330 ohm connecté au GND
*/

// 1 - Entête du programme
// espace pour déclarer des librairies externes
// #include <nomDeLaLibrairie>

// définir des constantes
// const type nom = valeur;  ou  #define nom valeur;

// déclarer des variables globales qui seront modifiées lors de l'éxécution du programme
// type nom;

// 2 - Fonction setup()
void setup() {
  // commandes exécutées une seule fois, au lancement du programme 
  pinMode(13, OUTPUT);      // pour utiliser la broche 13 pour allumer une LED il faut la configurer comme sortie
}

// 3 - Fonction loop()
void loop() {
  // commandes exécutées cycliquement 
  digitalWrite(13, HIGH);   // allume le LED (tension HIGH)
  delay(1000);              // attends une seconde
  digitalWrite(13, LOW);    // éteint le LED off (tension LOW)
  delay(1000);              // attends une seconde
}
