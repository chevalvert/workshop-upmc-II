# Button state

Since a pushbutton has only two states (pushed or not pushed), we've run them into digital inputs. To read an input, we'll use the `digitalRead()` function. This function takes one parameter, the pin number, and returns either `HIGH` (5V) or `LOW` (GND).

Remember that if the button is being pressed, it will be connected to GND. If the button is not being pressed, the pullup resistor will connect it to 5 Volts.

*So the state will be LOW when it is being pressed, and HIGH when it is not being pressed.*


# Logic functions 

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