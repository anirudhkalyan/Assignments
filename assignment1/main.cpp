#include <Arduino.h>
//Declaring all variables as integers
int U=1,V=1,W=0;
int G;
void setup()
{
pinMode(2, OUTPUT);
}
void loop() {
G=(U || V || !W) && (U || !V || !W) && (!U || V || !W) && (!U || !V || W);
digitalWrite(2, G);
}
