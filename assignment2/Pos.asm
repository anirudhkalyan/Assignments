.include "/home/krishna/m328Pdef.inc"
ldi r16,0b00000100  ;2 pin
out DDRD,r16
ldi r17, 0b11111000; identifying input pins 8,9,10
	out DDRB,r17		; declaring pins as input
ldi r17, 0b11111001;
	out PORTB,r17		; activating internal pullup for pins 8,9,10 
	
ldi r18,0b00000001 ; value
ldi r19,0b00000001 ; value
ldi r20,0b00000001; value

;in r17,PINB

and r18,r17 ; W
lsr r17;
and r19,r17;V
lsr r17;
and r20,r17; U
lsr r17;

ldi r21,0b00000001
eor r21,r18;  W'
ldi r22,0b00000001
eor r22,r19; V'
ldi r23,0b00000001
eor r23,r20; U'

mov r16,r21;W'
or r16,r19;V+W'
or r16,r20; U+V+W'
mov r24,r21;W'
or r24, r22;V'+W'
or r24,r20; U+V'+W'
and r16,r24;(U+V+W')(U+V'+W')
mov r25,r21;W'
or r25,r19;V+W'
or r25,r23;U'+V+W'
and r16,r25;(U+V+W')(U+V'+W')(U'+V+W')
mov r26,r18;W
or r26,r22;V'+W
or r26,r23;U'+V'+W
and r16,r26;(U+V+W')(U+V'+W')(U'+V+W')(U'+V'+W)

lsl r16;
lsl r16;

out PORTD,r16             ;G output

start:
rjmp start


