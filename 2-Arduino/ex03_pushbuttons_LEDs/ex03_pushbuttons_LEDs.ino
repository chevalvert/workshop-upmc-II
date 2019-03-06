/******************************************************************
 * Hardware connections:
 * 
 * Pushbuttons:
 * 
 * Pushbuttons have two contacts that are connected if you're
 * pushing the button, and disconnected if you're not.
 * 
 * The pushbuttons we're using have four pins, but two pairs
 * of these are connected together. The easiest way to hook up
 * the pushbutton is to connect two wires to any opposite corners.
 * 
 * Connect any pin on pushbutton 1 to ground (GND).
 * Connect the opposite diagonal pin of the pushbutton to
 * digital pin 2.
 * 
 * Connect any pin on pushbutton 2 to ground (GND).
 * Connect the opposite diagonal pin of the pushbutton to
 * digital pin 3.
 * 
 * Also connect 10K resistors (brown/black/red) between
 * digital pins 2 and 3 and 5V. These are called "pullup"
 * resistors. They ensure that the input pin will be either
 * 5V (unpushed) or GND (pushed), and not somewhere in between.
 * (Remember that unlike analog inputs, digital inputs are only
 * HIGH or LOW.)
 * 
 * LED:
 * 
 * Most Arduinos, including the Uno, already have an LED
 * and resistor connected to pin 13, so you don't need any
 * additional circuitry.
 * 
 * But if you'd like to connect a second LED to pin 13,
 * connect the positive side of your LED to Arduino digital pin 13.
 * Connect the negative side of your LED to a 330 Ohm resistor, and
 * connect the other side of the resistor to ground.
 * 
/*****************************************************************/

/******************************************************************
 * SparkFun Inventor's Kit
 * Example sketch 05 -- PUSH BUTTONS
 * 
 *   Use pushbuttons for digital input
 * 
 *   Connect one side of the pushbutton to GND, and the other
 *   side to a digital pin. When we press down on the pushbutton,
 *   the pin will be connected to GND, and therefore will be read
 *   as "LOW" by the Arduino.
 *
 * This sketch was written by SparkFun Electronics,
 * with lots of help from the Arduino community.
 * This code is completely free for any use.
 * Visit http://learn.sparkfun.com/products/2 for SIK information.
 * Visit http://www.arduino.cc to learn about the Arduino.
 * 
 * Version 2.0 6/2012 MDG
 * Version 2.1 9/2014 BCH
/*****************************************************************/

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