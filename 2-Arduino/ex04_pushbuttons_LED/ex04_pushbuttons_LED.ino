/*
  Utiliser un bouton-pressoir pour créer un signal d'entrée `digital input` 
  pour allumer et éteindre le LED.

  Connecter un côté du bouton-poussoir à GND et l’autre côté à une broche numérique. 
  Quand on appuie sur le bouton poussoir, la broche sera connectée à GND, 
  et sera donc lue comme "LOW" par l'Arduino.
*/


const int button1Pin = 2;  // pushbutton 1 pin
const int button2Pin = 3;  // pushbutton 2 pin
const int ledPin =  13;    // LED pin

int button1State, button2State;  // variables to hold the pushbutton states


void setup()
{
  // Set up the pushbutton pins to be an input:
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);

  // Set up the LED pin to be an output:
  pinMode(ledPin, OUTPUT);      
}

void loop()
{
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

  // if button1 or button 2 are pressed (but not both)
  if (((button1State == LOW) && (button2State == HIGH)) || ((button1State == HIGH) && (button2State == LOW)))
  {
    digitalWrite(ledPin, HIGH);  // turn the LED on
  }
  else
  {
    digitalWrite(ledPin, LOW);  // turn the LED off
  }
}
