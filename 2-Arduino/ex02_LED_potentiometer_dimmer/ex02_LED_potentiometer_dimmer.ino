/*  
  Programme pour mesurer la position d’un potentiomètre 
  et l’utiliser pour contrôler le rythme de clignotement d'une LED.

  Matériel :
    - Arduino Uno
    - LED
    - Résistance 330 ohm
    - Potentiometer
    - Breadboard
    - Câbles  

  Connectique :
    - LED + connecté au pin 13
    - LED — connecté à la résistance 220 ohm
    - Résistance 220 ohm connectée au GND 
    - Potentiomètre broche ext 1 connectée au 5V
    - Potentiomètre broche ext 2 connectée au GND
    - Potentiomètre broche centrale connectée au pin ANALOG IN A0
*/

// 1 - Entête du programme
// espace pour déclarer des librairies externes
// #include <nomDeLaLibrairie>

// définir des constantes
// const type nom = valeur;  ou  #define nom valeur;

// déclarer des variables globales qui seront modifiées lors de l'éxécution du programme
// type nom;

int potPin = A0;       // Le potentiomètre est connecté au analog pin A0                  
int ledPin = 3;       // Le LED est connecté au digital pin 13
int potValue;          // Déclaration d'une variable entière pour stocker la valeur du potentiomètre

// 2 - Fonction setup()
void setup(){
  // commandes exécutées une seule fois, au lancement du programme  
  Serial.begin(9600);      // open the serial port at 9600 bps: 
  pinMode(ledPin, OUTPUT);      // pour utiliser la broche 13 pour allumer une LED il faut la configurer comme sortie
}

// 3 - Fonction loop()
void loop(){
  // commandes exécutées cycliquement
  potValue = analogRead(potPin);      // potValue prend une valeur entre 0 et 1023, en fonction de la position du potPin
  analogWrite(ledPin, potValue / 4);  // analogWrite des valeurs comprises entre 0 et 255
  Serial.println(potValue/4);
}
