![ex02_led_potentiometer.png](ex02_led_potentiometer.png)

# Description du programme
Mesurer la position d’un potentiomètre et l’utiliser pour contrôler le taux de clignotement d'une LED.

# Matériel
  - Arduino Uno
  - LED
  - Résistance 220 ohm
  - Potentiometer
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
Un potentiomètre, ou "pot" en abrégé, est un bouton de commande. Un potentiomètre change de résistance en tournant. En l’utilisant comme "diviseur de tension", l’Arduino peut détecter la position du bouton et utiliser cette valeur pour contrôler ce que vous voulez (comme la fréquence de clignotement d’un LED dans notre exemple).

# Connexion du hardware

## Potentiomètre

Les potentiomètres ont trois broches. Lorsque nous l'utilisons comme diviseur de tension, nous connectons les broches extérieures à l'alimentation et à la terre. La broche du milieu sera le signal (une tension qui varie de 0 à 5 volts en fonction de la position du bouton).

Connexions :
  - broche ext 1 connectée au 5V
  - broche ext 2 connectée au GND
  - broche signal connectée au pin ANALOG IN A0

Si, une fois que votre programme est en cours d’exécution, le bouton fonctionne "à l'envers", vous pouvez connecter les broches 5V et GND en sens inverse.

# Variables

Une variable est un nombre nommé. Nous les utiliserons souvent pour stocker des nombres qui changent, tels que des mesures venant du monde extérieur, ou pour faciliter la compréhension d'un programme (un nom descriptif a parfois plus de sens qu'un nombre brut).

Les variables peuvent être différents "types de données" selon la nature du nombre que nous utilisons (selon s'il peut être négatif, avoir un point décimal etc). Pour le moment, nous allons nous limiter aux nombres entiers appelés `int` le programme.

Les integers `int` sont des nombres entiers (0, 3, 5643) et peuvent être négatifs.

Voir [la liste complète de déclaration de variables](http://arduino.cc/en/Reference/VariableDeclaration).

Vous devez "déclarer" les variables avant de les utiliser, afin que l'ordinateur les connaisse. Dans cette esquisse, nous déclarons deux variables entières et les initialisons simultanément à des valeurs spécifiques. Nous faisons cela afin que, plus loin dans le code, nous puissions faire référence aux broches par leur nom `potPin` et `ledPin` plutôt que par leur numéro `A0` et `13` .

Si vous déclarez des variables en dehors d’une fonction, comme nous l’avons ici, elles sont appelées "variables globales" et peuvent être
vues par toutes les fonctions. Si vous déclarez des variables dans une fonction, elles ne peuvent être vues que dans cette fonction. Il est judicieux de "limiter la portée" d'une variable chaque fois que cela est possible, mais pour commencer, nous allons utiliser des variables globales.

# pinMode()

Nous allons utiliser la broche 13 pour allumer une LED, nous devons donc la configurer comme sortie.

Comme nous avons déjà créé une variable appelée ledPin et que nous lui avons attribué la valeur 13, nous pouvons utiliser "ledPin" à la place de "13". Cela rend le programme plus facile à suivre. Cela signifie que `pinMode (ledPin, OUTPUT)` est identique à `pinMode (13, OUTPUT)`

Nous n'avons pas besoin de configurer `sensorPin` en tant qu'entrée parce qu'il s'agit d'une broche "entrée analogique". Ces broches ont la capacité spéciale de lire des tensions variables provenant de capteurs tels que le potentiomètre. Comme ils sont toujours utilisés comme entrées, il n’est pas nécessaire de les configurer spécifiquement.

Le potentiomètre est configuré comme un diviseur de tension, de sorte que lorsque vous le tournez, la tension sur la broche centrale varie de 0V à 5V. Nous avons connecté la broche centrale du potentiomètre à l'entrée analogique 0 de l'Arduino.

# analogRead()

L'Arduino peut lire les tensions externes sur les broches d'entrée analogiques à l'aide d'une fonction intégrée appelée `analogRead ()`. Cette fonction prend une valeur d'entrée venant de la broche analogique que nous utilisons (`potPin`, que nous avions précédemment définie sur `A0`). Il renvoie un nombre entier compris entre 0 (0 volts) et 1023 (5 volts).

Nous stockons cette valeur dans la variable `potValue`. Nous allons maintenant faire clignoter le LED en utilisant la variable `potValue` pour modifier la vitesse de clignotement (plus le nombre est petit, plus il clignotera rapidement).

