#include <Arduino.h>
int U=1,V=1,W=0;
int G;
void setup()
{
  pinMode(2, OUTPUT);
}
void loop()
{
  G=(U || V || !W) && (U || !V || !W) && (!U || V || !W) && (!U || !V || W);
  digitalWrite(2, G);
}

//&& is the AND operation
// || is the OR operation
// ! is the NOT operation
