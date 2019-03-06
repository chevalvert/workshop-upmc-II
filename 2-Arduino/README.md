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


## Références

### A - Structure d'un programme Arduino
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
  * [2 - Notation abrégée des opérations arithmétiques](#2---notation-abregee-des-operations-arithmetiques)
  * [3 - Les fonctions mathématiques](#3---les-fonctions-mathematiques)
        * [`abs()`](#abs)
        * [`sqrt()`](#sqrt)
        * [`pow()`](#pow)
        * [`min()` et `max()`](#min-et-max)
        * [`constrain()`](#constrain)
        * [`map()`](#map)
  * [4 - Les fonctions trigonométriques](#4---les-fonctions-trigonometriques)
  * [5 - Le hasard](#5---le-hasard)
- [C - La carte Arduino](#c---la-carte-arduino)
  * [1 - Alimentation électrique](#1---alimentation-electrique)
  * [2 - LEDs de contrôle](#2---leds-de-controle)
  * [3 - Connecteurs - entrées analogiques](#3---connecteurs---entrees-analogiques)
  * [4 - Connecteurs - Entrées / Sorties numériques](#4---connecteurs---entrees--sorties-numeriques)
  * [5 - Les sorties électriques](#5---les-sorties-electriques)
  * [6 - Alimenter la carte Arduino](#6---alimenter-la-carte-arduino)
- [D - Interrupteurs mécaniques](#d---interrupteurs-mecaniques)
- [E - Capteurs](#e---capteurs)
    + [Accéléromètre](#accelerometre)
    + [Gyroscope](#gyroscope)
    + [Capteur de torsion / flex sensor](#capteur-de-torsion--flex-sensor)
    + [Force sensitive sensor](#force-sensitive-sensor)
    + [LDR (Light Dependent Resistor) ou cellule photoélectrique](#ldr-light-dependent-resistor-ou-cellule-photoelectrique)
    + [Sonar](#sonar)
    + [Capteurs biométriques](#capteurs-biometriques)
    + [Outils de mesure de l'environnement](#outils-de-mesure-de-lenvironnement)
    + [Autres outils de mesure](#autres-outils-de-mesure)
- [F - Actionneurs](#f---actionneurs)
    + [Relais](#relais)
    + [Moteurs](#moteurs)
      - [Servomotor (servomoteur)](#servomotor-servomoteur)
      - [Stepper motor (Moteurs pas à pas)](#stepper-motor-moteurs-pas-a-pas)
      - [DC motor (moteur à trois temps, moteur à courant continu ou moteur DC).](#dc-motor-moteur-a-trois-temps-moteur-a-courant-continu-ou-moteur-dc)
      - [Solénoide](#solenoide)
      - [Valves et pompes](#valves-et-pompes)
      - [Shape memory alloy (fil à mémoire de forme)](#shape-memory-alloy-fil-a-memoire-de-forme)
- [G - Communication entre Arduino et Processing](#g---communication-entre-arduino-et-processing)


## License

[MIT.](https://tldrlegal.com/license/mit-license)
