# UE Outils de représentation et d'interaction :  Initiation à Arduino

## Qu'est-ce qu'Arduino ?

Arduino est une plateforme de prototypage électronique open-source, basée d’une part sur du matériel ([Arduino microcontroller](http://www.arduino.com)), sur du logiciel ([Arduino IDE](http://arduino.cc/en/Main/Software)) et sur un langage de programmation (les fonctions et bibliothèques sont écrites en langage C ou C++). 

Une carte Arduino communique avec son environnement par l’intermédiaire de ses broches d’entrée et de sortie. 

Sur les broches `input`, nous pouvons connecter des capteurs (des dispositifs permettant de transformer une information de l’environnement en signal électrique) et sur les broches `output`nous pouvons connecter des actionneurs (dispositifs permettant de transformer un signal électrique en action mécanique ou lumineuse).

`Recevoir des informations envoyées par des capteurs → les traiter avec le programme → envoyer des informations pour commander des actionneurs`

### La plateforme matérielle
Les cartes Arduino sont des circuits électroniques composés de connecteurs reliés à un micro-contrôleur programmable. Les cartes Arduino peuvent être alimentés par le port USB de l'ordinateur (elles fonctionnent en interne à 3,3V ou à 5V) mais aussi par une alimentation extérieure variant entre 7 et 12V. Il ne faut pas excéder ces valeurs, sinon la carte et les composants branchés pourraient être endommagés (et en plus cela peut entrainer un risque pour l'utilisateur). 

### L'environnement logiciel
L'environnement de programmation pour Arduino ([Arduino IDE](http://arduino.cc/en/Main/Software)) est un logiciel gratuit open-source.
- il permet d'écrire des programmes en langage Arduino et de tester leur validité
- il permet de les compiler et de les "téléverser" vers la carte Arduino
- il permet de communiquer avec le microcontroleur et de recevoir ses messages

### Le langage
Le langage informatique Arduino est inspiré des langages C et C++. Ses commandes sont adaptées aux besoins de la carte, surtout celui qui consiste à communiquer avec ses différents connecteurs.

## Ressources et bibliographie 
- [Site web du logiciel + ressources](https://www.arduino.cc/)  
- [Tutoriels](https://www.arduino.cc/en/Tutorial/HomePage)
- *Projets créatifs avec Arduino* par B. Affagard, J.-M. Guéridan, J.-N. Lafargue
- *Les capteurs pour Arduino et Raspberry Pi* par Tero Karvinen , Kimmo Karvinen , Ville Valtokari
- *[Sparkfun Inventor's Kit pour Arduino](https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v40)*


## Index

### 1 - Structure d'un programme Arduino

```java
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
}

// 3 - Fonction loop()
void loop() {
  // commandes exécutées cycliquement 
}
```

[→ exercice 0 : blink](/2-Arduino/ex00_blink)  
[→ exercice 1 : blink LED](/2-Arduino/ex01_blink_LED)

### 2 - Variables, `pinMode()` et `analogRead()`
[→ exercice 2 : LED + potentiomètre](/2-Arduino/ex02_LED_potentiometer)


### 3 - Structures de contrôle, opérateurs boléens et `digitalRead()`
Structures de contrôle :
- `if ...`
- `if ... else ...`
- `if ... else if ... else`
- `switch`et `case` 

[→ exercice 3 : LED + 1 boutton pressoir](/2-Arduino/ex03_pushbutton_LED)

Opérateurs boléens :
- `&&`  and
- `||`  or 
- `!`  different from

[→ exercice 4 : LED + 2 bouttons pressoirs](/2-Arduino/ex04_pushbuttons_LED)


### A - Structure d'un programme
#### 1 - Formats de données
#### 2 - Déclaration de variables
#### 3 - Type de variables
#### 4 - Conversion
#### 5 - Tableaux
#### 6 - Chaînes de caractère
#### 7 - Structures de contrôle
- `if ...`
- `if ... else ...`
- `if ... else if ... else`
- `switch`et `case` 

#### 8 - Les opérateurs booléans
- `&&` and
- `||` or
- `!` different from

#### 9 - Les boucles
- `while`
- `do`
- `break`
- `for`
- `continue`
- Fonction + Return

### B - Mathématiques
#### 1 - Les opérateurs arithmétiques
- `+` addition
- `—` soustraction
- `*` multiplication
- `/` division
- `%` modulo

#### 2 - Notation abrégée des opérations arithmétiques
#### 3 - Les fonctions mathématiques
- `abs()`
- `sqrt()`
- `pow()`
- `min()` et `max()`
- `constrain()`
- `map()`

#### 4 - Les fonctions trigonométriques
#### 5 - Le hasard

### C - La carte Arduino
#### 1 - Alimentation électrique
#### 2 - LEDs de contrôle
#### 3 - Connecteurs - entrées analogiques
#### 4 - Connecteurs - Entrées / Sorties numériques
#### 5 - Les sorties électriques
#### 6 - Alimenter la carte Arduino

### D - Interrupteurs mécaniques

### E - Capteurs
- Accéléromètre
- Gyroscope
- Capteur de torsion / flex sensor
- Force sensitive sensor
- LDR (Light Dependent Resistor) ou cellule photoélectrique
- Sonar
- Capteurs biométriques
- Outils de mesure de l'environnement
- Autres outils de mesure

### F - Actionneurs
- Relais
- Moteurs
- Servomotor (servomoteur)
- Stepper motor (Moteurs pas à pas)
- DC motor (moteur à trois temps, moteur à courant continu ou moteur DC)
- Solénoide
- Valves et pompes
- Shape memory alloy (fil à mémoire de forme)

### G - Communication entre Arduino et Processing
- [SensorShield Library](https://github.com/MAKIO135/sensorShieldLib)


## License

[MIT.](https://tldrlegal.com/license/mit-license)
