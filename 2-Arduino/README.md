# UE Outils de représentation et d'interaction :  Initiation à Arduino

## Qu'est-ce qu'Arduino ?

Arduino est une plateforme de prototypage électronique open-source, basée d’une part sur du matériel et d’autre part sur un ensemble de logiciels faciles à utiliser.
La carte la plus utilisée est l’Arduino Uno. Il s’agit d’une carte équipée d’un micro-contrôleur de la famille AVR 8 bits : l’ATMega328.

Une carte Arduino communique avec son environnement par l’intermédiaire de ses broches d’entrées/sorties. Sur ces broches, des capteurs, dispositifs permettant de transformer une information de l’environnement en signal électrique et des actionneurs, dispositifs permettant de transformer un signal électrique en action mécanique ou lumineuse, vont être connectés.

L’Arduino étant un ordinateur spécialisé dans la gestion de capteurs et d’actionneurs, c’est un programme qui va décider de la manière donc les capteurs et les actionneurs sont utilisés. C'est de l’électronique programmable (à microcontrôleur).

Les fonctions et bibliothèques sont écrites en langage C ou C++ 

- [Site web du logiciel + ressources](https://www.arduino.cc/)  
- [Tutoriels](https://www.arduino.cc/en/Tutorial/HomePage)

## Bibliographie 
- *Projets créatifs avec Arduino* par B. Affagard, J.-M. Guéridan, J.-N. Lafargue
- *Les capteurs pour Arduino et Raspberry Pi* par Tero Karvinen , Kimmo Karvinen , Ville Valtokari


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

[→ exercice 3 : LED + 1 boutton pressoir](/2-Arduino/ex03_pushbutton_LEDs)

Opérateurs boléens :
- `&&`  and
- `||`  or 
- `!`  different from

[→ exercice 4 : LED + 2 bouttons pressoirs](/2-Arduino/ex04_pushbuttons_LED)



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

### F - Actionneurs]
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
