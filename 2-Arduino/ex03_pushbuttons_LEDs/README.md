# Description du programme
Utiliser un bouton-pressoir pour créer un signal d'entrée `digital input` pour allumer et éteindre le LED.

Connecter un côté du bouton-poussoir à GND et l’autre côté à une broche numérique. 
Quand on appuie sur le bouton poussoir, la broche sera connectée à GND, et sera donc lue comme "LOW" par l'Arduino.


# Matériel
  - Arduino Uno
  - LED
  - Résistance 220 ohm
  - x2 boutons pressoirs
  - x2 Résistances 10k ohm
  - Breadboard
  - Câbles

# Connectique
  - LED + connecté au pin 13
  - LED — connecté à la résistance 220 ohm
  - Résistance 220 ohm connectée au GND 
  - Connect any pin on pushbutton 1 to ground (GND).
  - Connect the opposite diagonal pin of the pushbutton to digital pin 2.
  - Connect any pin on pushbutton 2 to ground (GND).
  - Connect the opposite diagonal pin of the pushbutton to digital pin 3.
  - Also connect 10K resistors (brown/black/red) between digital pins 2 and 3 and 5V.
  	These are called "pullup" resistors. They ensure that the input pin will be either
  	5V (unpushed) or GND (pushed), and not somewhere in between. (Remember that unlike analog inputs, digital inputs are only HIGH or LOW.)

# Déroulé des actions programmées
  - 
  - 
  - 
  - 

# Bouton-pressoir

Les boutons-poussoirs ont deux contacts qui sont connectés si vous appuyez sur le bouton et déconnectés si vous ne l'êtes pas.


# Button state `digitalRead()`

Comme un bouton-poussoir n'a que deux états (poussé ou non poussé), nous les avons connectés à des entrées numériques et déclarés comme `INPUT`. 

Pour lire une entrée, nous utilisons la fonction `digitalRead ()`. Cette fonction prend un paramètre, le numéro de broche, et renvoie soit `HIGH` (5V) ou` LOW` (GND).

Rappelez-vous que si le bouton est enfoncé, il sera connecté à GND. Si le bouton n'est pas enfoncé, la résistance pullup le connectera à 5 volts.
**Ainsi, l’état sera LOW lorsqu’il est pressé et HIGH quand il n’est pas pressé.**


# Structures de contrôle, opérateurs boléens

Dans cet exemple, le LED s'allume lorsqu'un bouton est enfoncé. Traduisons cela en code informatique. L'Arduino A des fonctions logiques spéciales pour gérer la logique vraie / fausse:

## Les opérateurs boléens

On peut utiliser les opérateurs `&&` et `||` dans des structures de contrôle, dans le but d'associer des conditions.

`A == B` veux dire "EQUIVALENT". Cela est vrai si les deux côtés sont les mêmes
`A && B` veux dire "AND". Cela est vrai si les deux côtés sont vrais.
`A || B` veux dire "OR". Ceci est vrai si l'un des côtés est vrai.
`!A` veux dire "NOT". This makes anything after it the opposite (true or false).


Nous pouvons utiliser ces opérateurs pour traduire les phrases ci-dessus en instructions logiques (rappelez-vous que LOW signifie que le bouton est enfoncé)

"Si l'un des boutons est enfoncé, le voyant s'allume" devient:
```java
 if ((button1State == LOW) && (button2State == HIGH)) // Only button1 is pushed, light the LED
 if ((button1State == HIGH) && (button2State == LOW)) // Only button2 is pushed, light the LED
```

Combinez les deux avec un OR (`||`) 

```java
if ((button1State == LOW) && (button2State == HIGH)) || ((button1State == HIGH) && (button2State == LOW)) 
```

N'oubliez pas que nous utilisons `=` lorsque nous assignons une valeur et que nous utilisons `==` lorsque nous vérifions l'équivalence d'une valeur.