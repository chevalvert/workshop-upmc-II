![ex00_blink.gif](ex00_blink.gif)

# Description du programme

Programme pour faire clignoter le LED intégré dans l'Arduino, qui est rattaché à la broche digitale 13.

# Déroulé des actions programmées
  - allume le LED pendant une seconde
  - éteint le LED pendant une seconde
  - action répétée en boucle

# Fonctions utilisées

[`pinMode()`](https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/)
Configure la broche pour qu'elle se comporte comme une entrée ou une sortie.

[`digitalWrite()`](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/)
Écrit une valeur HIGH ou LOW sur une broche numérique.