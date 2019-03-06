# UE Outils de représentation et d'interaction : Initiation à Processing et initiation à Arduino

## Studio Chevalvert

[Chevalvert](https://chevalvert.fr/about/) est un studio de design visuel basé à Paris.
Le studio conçoit des [identités](https://chevalvert.fr/identite/), des [typographies](https://chevalvert.fr/typographie/relief/) et des [installations interactives](https://chevalvert.fr/installation/).

Nous imaginons et réalisons des installations en utilisant du hardware et du software divers (stripLEDs, capteurs, Leap Motion, contrôleurs DMX, nodeJS, JavaScript ...) :
- [Stratum](https://chevalvert.fr/installation/stratum/) 
- [Le temps Suspendu](https://chevalvert.fr/installation/le-temps-suspendu/)
- [Mechane](https://chevalvert.fr/installation/mechane/)

Nous réalisons aussi des dispositifs en utilisant le software de programmation graphique [Processing](https://processing.org/) :  
- [Ink under paper](https://chevalvert.fr/installation/ink-under-paper/)  
Dans ce projet nous questionnons le lien entre la matière physique (le papier) et la matière numérique (l'encre digitale créée avec un algorithme qui simule un comportement liquide). 
- [Mechanical Frames](https://chevalvert.fr/installation/mechanical-frames/)
Une autre possibilité est de lier la génération graphique de Processing à des données physiques qui sont transmises au programme par la carte électronique ([Arduino](https://www.arduino.cc/)), reliée à son tous à des capteurs.  


## Objectifs du workshop 

6 séances de 4h
- S'initier à Processing
- S'initier à Arduino
- S'initier aux capteurs
- Faire communiquer Processing et Arduino
- Concevoir et prototyper un dispositif ou une expérience de captation/perception (par groupes de 3)
- Présenter le projet lors de la dernière séance

## Processus et documentation 

Tout au long du workshop vous devrez respecter une méthodologie de documentation de vos projets. Pour cela :
- Nous analyserons la méthodologie pour concevoir, réaliser et documenter des prototypes de dispositifs interactifs (étude de cas du projet ["Ink under paper"](https://bricks.chevalvert.fr/projects/ink-under-paper/user:upmc) du studio Chevalvert)
- Pour chacun de vos projets vous réaliserez :
	- la note d’intention
    - le diagramme d’interaction
    - le diagramme technique
    - le descriptif du programme
    - le programme
    - la vidéo de documentation du projet

## Sujet : Humanimal
### Être capteur

En collaboration avec Simon Renaud.

#### Problématique
**Agir & percevoir à la manière de...**


#### Ressources présentées par Simon Renaud

**Notre corps, notre vision du monde.**

Nous percevons le monde extérieur grâce à nos organes de sens.

En permanence, nous analysons de manière plus ou moins consciente les informations dont nous disposons grâce à nos yeux, nos oreilles, notre langue, notre nez et notre peau. Bref, nos capteurs naturels.

Il y a diverses modalités de stimulus :
— lumière
— son
— pression
— température
— goût
— odeurs

**L'outil**
«L’outil apparaît comme une véritable sécrétion du corps et du cerveau ; on peut donc appliquer à cet organe artificiel les normes des organes naturels.» Le Geste et la parole, André Leroi-Gourhan. 1964, vol. 1
![03-rapport-outils.png](overview/03-rapport-outils.png)

**Percevoir c'est agir**
«On ne perçois jamais ce qui donne à percevoir. Ni sa rétine, ni ses mouvements oculaires, ni ses lunettes, etc.» Charles Lenay

![01-perception-action.png](overview/01-perception-action.png)
![02-rapport-monde.png](overview/02-rapport-monde.png)

### Exercice 

Tableau animal - mécanisme de perception - capteur - mécanisme low tech
Projet : PoCs et prototype final + documentation

#### Exemples
Voir comme un insecte, bouger comme une mouche, etc.

#### Objectif
Collecter des textes et des références sur votre problématique
Créer des maquettes pour rendre compte de cette perception
Créer une expérience de perception à travers une/des prothèse/s
Prototyper une/des prothèses/s

### Rendu
Simon Renaud :
- un exposé sur votre problématique (10 slides)
- 2 affiches textes (2 A3)
- conception d’une «prothèse»

Chevalvert :
- prototypage d'une «prothèse»
- documentation et présentation

Groupe
› 3 étudiants

### Déroulé
Cours 1 (salle informatique) : 
- Présentation des projets des groupes
- Initiation à Processing

Cours 2 (salle informatique) :
- Complétion du tableau avec les capteurs disponibles sur Adafruit
- Conception des dispositifs : diagrammes d'interaction et PoC

Cours 3 (salle crea) :
- Initiation à Arduino
- Initiation aux capteurs

Cours 4 (salle crea) :
- Communication Processing / Arduino

Cours 5
- PoCs
- Prototype

Cours 6
- Prototype

### Tableau compétence animal

| Animal         | Particularité  | Organe/capeteur  | Possibilité  |
| :-----------:  |:--------------:|:----------------:|:------------:|
| Serpent        | —			  | —                | —            |
| Araignée       | —		      | —                | —            |
| Caméléon       | —		      | —                | —            |
| Chauve-souris  | —		      | —                | —            |


1 — Animal
(serpent, araignée, caméléon, chauve-souris, etc.)

2 — Particularité
(voir la nuit, voir à 290°, une toile, etc.)

3 — Organe/capteur
(moustaches, yeux, poils, etc.)

4 — Possibilité
(chasser, se déplacer, attraper, etc.)

## Qu'est-ce que Processing ?

Processing est est une bibliothèque Java et un environnement de développement libre. L'outil créé par [Ben Fry](https://fathom.info/about/) et [Casey Reas](http://reas.com/) est un le logiciel de programmation dédié à la création plastique et graphique interactive. 

- [Site web du logiciel + ressources](https://processing.org/)  
- [Plateforme d'échange de sketchs de la communauté](https://www.openprocessing.org/)

## Qu'est-ce qu'Arduino ?
L’Arduino est une plateforme de prototypage électronique open-source, basée d’une part sur du matériel et d’autre part sur un ensemble de logiciels faciles à utiliser.
La carte la plus utilisée est l’Arduino Uno. Il s’agit d’une carte équipée d’un micro-contrôleur de la famille AVR 8 bits : l’ATMega328.

Une carte Arduino communique avec son environnement par l’intermédiaire de ses broches d’entrées/sorties. Sur ces broches, des capteurs, dispositifs permettant de transformer une information de l’environnement en signal électrique et des actionneurs, dispositifs permettant de transformer un signal électrique en action mécanique ou lumineuse, vont être connectés.

L’Arduino étant un ordinateur spécialisé dans la gestion de capteurs et d’actionneurs, c’est un programme qui va décider de la manière donc les capteurs et les actionneurs sont utilisés. C'est de l’électronique programmable (à microcontrôleur).

Les fonctions et bibliothèques sont écrites en langage C ou C++ 

## License

[MIT.](https://tldrlegal.com/license/mit-license)
