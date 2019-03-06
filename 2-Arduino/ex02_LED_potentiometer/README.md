![ex02_led_potentiometer.png](ex02_led_potentiometer.png)

# Description du programme
Mesurer la position d’un potentiomètre et l’utiliser pour contrôler le rythme de clignotement d'une LED.

# Matériel
  - Arduino Uno
  - LED
  - Résistance 220 ohm
  - Potentiomètre
  - Breadboard
  - Câbles

# Connectique
  - LED + connecté au pin 13
  - LED — connecté à la résistance 220 ohm
  - Résistance 220 ohm connectée au GND 
  - Potentiomètre broche ext 1 connectée au 5V
  - Potentiomètre broche ext 2 connectée au GND
  - Potentiomètre broche centrale connectée au pin ANALOG IN A0

# Déroulé des actions programmées
  - lis de la position du potentiomètre
  - allume le LED
  - temps d'allumage défini par la position du potentiomètre
  - éteint le LED
  - temps d'extinction défini par la position du potentiomètre

# Qu'est-ce qu'un potentiomètre ?
Un potentiomètre, ou "pot" en abrégé, est un bouton de commande. Un potentiomètre change de résistance en tournant. En l’utilisant comme "diviseur de tension", l’Arduino peut détecter la position du bouton et utiliser cette valeur pour contrôler ce que vous voudrez (comme la fréquence de clignotement d’un LED dans notre exemple).

Les potentiomètres ont trois broches. Lorsque nous l'utilisons comme diviseur de tension, nous connectons les broches extérieures à l'alimentation et à la terre. La broche du milieu sera le signal (une tension qui varie de 0 à 5 volts en fonction de la position du bouton).

Si, une fois que votre programme est en cours d’exécution, le bouton fonctionne "à l'envers", vous pouvez connecter les broches 5V et GND en sens inverse.

# Variables

Une variable est un nombre "nommé". Nous les utilisons pour stocker des nombres qui changent, tels que des mesures venant du monde extérieur.

Les variables seront de la nature du nombre que nous utilisons. 

Les integers `int` sont des nombres entiers (0, 3, 5643) et peuvent être négatifs.

Voir [la liste complète de déclaration de variables](http://arduino.cc/en/Reference/VariableDeclaration).

Vous devez "déclarer" les variables avant de les utiliser, afin que l'ordinateur les connaisse. Plus loin dans le code, nous pouvons faire référence aux broches par leur nom `potPin` et `ledPin` plutôt que par leur numéro `A0` et `13` .

Si vous déclarez des variables en dehors d’une fonction, elles sont appelées "variables globales" et peuvent être vues par toutes les fonctions. Si vous déclarez des variables dans une fonction, elles ne peuvent être vues que dans cette fonction.

# pinMode()

Nous allons utiliser la broche 13 pour allumer une LED, nous devons donc la configurer comme sortie.

Comme nous avons déjà créé une variable appelée `ledPin` et que nous lui avons attribué la valeur 13, nous pouvons utiliser `ledPin` à la place de `13` pour rendre le programme plus lisible. Cela signifie que `pinMode (ledPin, OUTPUT)` est identique à `pinMode (13, OUTPUT)`

Nous n'avons pas besoin de configurer `sensorPin` en tant qu'entrée parce qu'il s'agit d'une broche "entrée analogique". Ces broches ont la capacité de lire des tensions variables provenant de capteurs tels que le potentiomètre.

# analogRead()

L'Arduino peut lire les tensions sur les broches d'entrée analogiques à l'aide d'une fonction intégrée appelée `analogRead ()`. 

Cette fonction prend une valeur d'entrée venant de la broche analogique que nous utilisons (dans notre programme `potPin`, que nous avions précédemment définie sur `A0`). Il renvoie un nombre entier compris entre 0 (0 volts) et 1023 (5 volts).

Nous stockons cette valeur dans la variable `potValue` et nous l'utilisons pour modifier le rythme de clignottement du LED  (plus le nombre est petit, plus il clignotera rapidement).

