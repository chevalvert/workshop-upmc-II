# UE Outils de représentation et d'interaction : Initiation à Processing et à Arduino

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
Une autre possibilité est de lier la génération graphique de Processing à des données physiques qui sont transmises au programme par la carte électronique ([Arduino](https://www.arduino.cc/), reliée à son tous à des capteurs.  


## Objectifs du workshop 
6 séances de 4h
- S'initier à [Processing](https://processing.org/)
- S'initier à [Arduino](https://www.arduino.cc/)
- S'initier aux capteurs
- Faire communiquer Processing et Arduino en utilisant la librairie [SensorShield](https://github.com/MAKIO135/sensorShieldLib)
- Concevoir et prototyper un dispositif ou une expérience de captation/perception (par groupes de 3)
- Présenter le projet lors de la dernière séance


## Processus, documentation et rendu 
Tout au long du workshop vous devrez respecter une méthodologie de documentation de vos projets. Pour cela nous analyserons la méthodologie pour concevoir, réaliser et documenter des prototypes de dispositifs interactifs (étude de cas du projet ["Ink under paper"](https://bricks.chevalvert.fr/projects/ink-under-paper/user:upmc) du studio Chevalvert)

### Dates de rendu 
1er rendu : le jeudi 18 avril  
2e rendu : le 9 mai (avec Simon Renaud)


### Contenus du rendu
Toute la documentation devra se faire sur le Wiki du FabLab Sorbonne et devra nous être envoyée dans un dossier .zip par email à arnaud@chevalvert.fr et julia@chevalvert.fr

- Pour chacun des exercices pratiques vous créerez un dossier contenant
	- le descriptif écrit du programme
	- le programme
	- le schéma du circuit (sur Fritzing ou à la main)
 	- liste du matériel et du logiciel utilisé (Arduino, Processing, capteurs, résistances etc.)
    - la documentation photo et vidéo

- Pour le dispositif que vous allez présenter le 18 avril et le 9 mai vous devrez présenter et rendre 
	- la note d’intention
    - le descriptif écrit du programme
    - le programme
    - le schéma du circuit
 	- liste du matériel et du logiciel utilisé (Arduino, Processing, capteurs, résistances etc.)
    - la documentation photo et vidéo  
 	- le dispositif pour faire une démonstration lors du rendu


### Exemples de documentation
Sur Twitter, beaucoup d'artistes, designer et développeurs créatifs documentent leurs projets de façon totalement décomplexée. 

L'important n'est pas de montrer un projet fini avec une vidéo léchée, mais de documenter le _work in progress_ avec son lot d'erreurs et de bugs.

Twitter devient un journal de bord.

[![overview/tw00.png](overview/tw00.png)](https://twitter.com/lorenschmidt/status/1098594292573130758)
[![overview/tw01.png](overview/tw01.png)](https://twitter.com/ok_remi_ok/status/1100150310088134656)
[![overview/tw02.png](overview/tw02.png)](https://twitter.com/ok_remi_ok/status/1100150310088134656)
[![overview/tw04.png](overview/tw04.png)](https://twitter.com/lorenschmidt/status/1099043249254293505)
[![overview/tw05.png](overview/tw05.png)](https://twitter.com/quasimondo/status/1099344714518724608)
[![overview/tw06.png](overview/tw06.png)](https://twitter.com/inconvergent/status/1094188053940367360)


## Sujet : Humanimal
### Être capteur
En collaboration avec Simon Renaud.

#### Problématique
"Agir & percevoir à la manière de..."


#### Sélection des contenus présentés par Simon Renaud

##### Notre corps, notre vision du monde.
Nous percevons le monde extérieur grâce à nos organes de sens.

En permanence, nous analysons de manière plus ou moins consciente les informations dont nous disposons grâce à nos yeux, nos oreilles, notre langue, notre nez et notre peau. Bref, nos capteurs naturels.

Il y a diverses modalités de stimulus :
- lumière
- son
- pression
- température
- goût
- odeurs

##### L'outil
«L’outil apparaît comme une véritable sécrétion du corps et du cerveau ; on peut donc appliquer à cet organe artificiel les normes des organes naturels.» Le Geste et la parole, André Leroi-Gourhan. 1964, vol. 1
![03-rapport-outils.png](overview/03-rapport-outils.png)  
*Diagramme par Simon Renaud*

##### Percevoir c'est agir
«On ne perçois jamais ce qui donne à percevoir. Ni sa rétine, ni ses mouvements oculaires, ni ses lunettes, etc.» Charles Lenay

![01-perception-action.png](overview/01-perception-action.png)
![02-rapport-monde.png](overview/02-rapport-monde.png)  
*Diagrammes par Simon Renaud*

### Déroulé
**Cours 1 (salle informatique 435) :** 
- Présentation du studio Chevalvert et de quelques uns de ses projets (30min)
- Initiation à Processing : outil de dessin (2h30)
- Présentation des projets initiés par les groupes (1h)


**Cours 2 (salle micro 101) :**
- Suite de l'initiation à Processing
- Travail par groupes sur le projet
	- note d’intention
	- descriptif des programmes de prototypage à réaliser 
	- écriture des programmes de prototypage sur Processing


**Cours 3 (salle créativité) :**
- Initiation à Arduino 
- Communication Processing < > Arduino
- Initiation aux capteurs : présentation des catalogues de capteurs [Sparkfun](https://www.sparkfun.com/categories/23) et [Adafruit](https://www.adafruit.com/?q=sensors)


**Cours 4 (salle créativité) :**
- Conception du dispositif : 
	- réaliser le descriptif des programmes Arduino et Processing
	- réalisaer un PoC (Proof of Concept)
	- écrire les synoptiques techniques du dispositif (matériel, câblage etc.)
- Réalisation du [prototype](https://medium.com/a-view-from-above/exploratory-prototyping-in-product-design-6d89ff17f542)
- Documentation

- Recherche sur les capteurs :
		- Consultation des catalogues de capteurs [Sparkfun](https://www.sparkfun.com/categories/23) et [Adafruit](https://www.adafruit.com/?q=sensors)
		- Complétion du tableau de compétence de captation animal avec une colonne dédiée aux capteurs disponibles sur le catalogue
		- Complétion du tableau avec les capteurs disponibles au fablab
		- Complétion du tableau avec des solutions low tech

Tableau de compétence de captation animal

| Animal         | Particularité  | Organe/capteur   | Possibilité  | Capteur dans le marché  | Capteur disponible dans le fablab  | Système de captation conçu de façon low-tech  |
| :-----------:  |:--------------:|:----------------:|:------------:|:-----------------------:|:----------------------------------:|:---------------------------------------------:|
| —			     | —			  | —			     | —		    | —			     		  | —			     	      	       | —			       			  	      	       |
| 			     | —			  | —			     | —		    | —			     		  | —			     	      	       | —			       			  	      	       |
| 			     | —			  | —			     | —		    | —			     		  | —			     	      	       | —			       			  	      	       |


**Cours 5 (salle créativité) :**
- Réalisation du dispositif
- Documentation


**Cours 6 (salle créativité) :**
- Réalisation du dispositif
- Documentation
- Présentation

## Qu'est-ce que Processing ?
[→ Initiation à Processing](/1-Processing)

## Qu'est-ce qu'Arduino ?
[→ Initiation à Arduino](/2-Arduino)

## Communcation entre les deux plateformes
[→ Communcation entre Processing et Arduino](/3-Com-SensorShield)

## Prototypes
[Pratique du prototypage](https://medium.com/a-view-from-above/exploratory-prototyping-in-product-design-6d89ff17f542)  
[Pigeon vision](http://tibaut.co.uk/projects/pigeon-vision) de Thibaut Evrard  
[Chindogu](https://www.google.com/search?q=chindogu&client=firefox-b-d&source=lnms&tbm=isch&sa=X&ved=0ahUKEwiOjvGOmbbhAhWMoBQKHT2GCOMQ_AUIDigB&biw=1393&bih=1099)  
[Unnecessary inventions](https://www.instagram.com/unnecessaryinventions/)

## License
[MIT.](https://tldrlegal.com/license/mit-license)
