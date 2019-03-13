/*
  Programme pour faire clignoter le LED intégré dans l'Arduino,
  qui est rattaché à la broche digitale 13.

  Déroulé des actions programmées :
  - allume le LED pendant une seconde
  - éteint le LED pendant une seconde
  - action répétée en boucle
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
  // initialise le pin digital 13 comme une sortie
  pinMode(13, OUTPUT);
}

// 3 - Fonction loop()
void loop() {
  // commandes exécutées cycliquement 
  digitalWrite(13, HIGH);   // allume le LED (tension HIGH)
  delay(1000);              // attends une seconde
  digitalWrite(13, LOW);    // éteint le LED off (tension LOW)
  delay(1000);              // attends une seconde
}
