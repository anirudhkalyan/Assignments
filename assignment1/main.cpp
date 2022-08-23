#include <Arduino.h>
//Declaring all variables as integers
int U=1,V=1,W=0;
int D,C,B,A;

//Code released under GNU GPL.  Free to use for anything.
void disp_7447( int D, int C, int B, int A)
{
  digitalWrite(2, A); //LSB
  digitalWrite(3, B); 
  digitalWrite(4, C);
  digitalWrite(5, D);   //MSB

}
// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(2, OUTPUT);  
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  A=(U || V || !W) && (U || !V || !W) && (!U || !V || W);
B=0;
C=0;
D=0;
disp_7447(D,C,B,A);  
}
//&& is the AND operation
// || is the OR operation
// ! is the NOT operation

