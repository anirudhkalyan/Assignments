#include <Arduino.h>
//Declaring all variables as integers
int U=1,V=1,W=0;
int A;
void setup()
{
pinMode(2, OUTPUT);
}
void loop() {
A=(V || !W) && (U || !W) &&(!U || !V || W);
digitalWrite(2, A);
}
