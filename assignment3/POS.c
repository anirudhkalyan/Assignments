#include <avr/io.h>
#include <stdbool.h>
#include <util/delay.h>
int main (void)
{

 bool U=1,V=0,W=0,G;
 DDRB =  0b00100000;  //  13 pin as output 
 DDRD =  0b11100011;
 PORTD = 0b00011100;   // 2,3,4 as inputs
 

while(1)
{  

//U= (PIND & (1 << PIND2)) == (1 << PIND2);
//V= (PIND & (1 << PIND3)) == (1 << PIND3);
//W=(PIND & (1 << PIND4)) == (1 << PIND4);
G=(U||V||!W)&&(U||!V||!W)&&(!U||V||!W)&&(!U||!V||W);
PORTB |= (G<< 5);
}
return 0;
}

