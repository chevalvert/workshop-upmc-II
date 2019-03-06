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


# Button state

Since a pushbutton has only two states (pushed or not pushed), we've run them into digital inputs. To read an input, we'll use the `digitalRead()` function. This function takes one parameter, the pin number, and returns either `HIGH` (5V) or `LOW` (GND).

Remember that if the button is being pressed, it will be connected to GND. If the button is not being pressed, the pullup resistor will connect it to 5 Volts.

*So the state will be LOW when it is being pressed, and HIGH when it is not being pressed.*


# Structures de contrôle, opérateurs boléens

In this example, the LED turns on only when one button is pressed.
Let's translate that into computer code. The Arduino gives you special logic functions to deal with true/false logic:

`A == B` means "EQUIVALENT". This is true if both sides are the same.
`A && B` means "AND". This is true if both sides are true.
`A || B` means "OR". This is true if either side is true.
`!A` means "NOT". This makes anything after it the opposite (true or false).

We can use these operators to translate the above sentences into logic statements (Remember that LOW means the button is being pressed)

"If either button is being pressed, light up the LED" becomes:
```java
 if ((button1State == LOW) && (button2State == HIGH)) // Only button1 is pushed, light the LED
 if ((button1State == HIGH) && (button2State == LOW)) // Only button2 is pushed, light the LED
```

Combine these two with an OR (`||`) 

```java
if ((button1State == LOW) && (button2State == HIGH)) || ((button1State == HIGH) && (button2State == LOW)) 
```

As you can see, logic operators can be combined to make complex decisions!
Don't forget that we use `=` when we're assigning a value, and use `==` when we're testing a value for equivalence.