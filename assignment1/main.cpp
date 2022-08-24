#include <Arduino.h>
//Declaring all variables as integers
int U=1,V=0,W=0;
int A;
void setup()
{
pinMode(2, OUTPUT);
}
void loop() {
A=(U || V || !W) && (U || !V || !W) && (!U || V || !W) && (!U || !V || W);
digitalWrite(2, A);
}
