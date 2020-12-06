![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/Practica38/images/cooltext370651591717199.gif)

## CPP
```cpp
//
// blinky.cpp
// Instituto Tecnologico de Tijuana
// Lenguajes de Interfaz
// Silvia Alejandra Salazar Felix 18212266
// Practica 3.8

#include <iostream>
#include <wiringPi.h>
using namespace std;

int ledPin = 29;  //Corresponde a pin 40

void setup(){

	pinMode(ledPin,OUTPUT);
	cout<<"Hello World" << endl;
}

void loop(){
	digitalWrite(ledPin,HIGH);
	delay(100);
	digitalWrite(ledPin,LOW);
	delay(100);

	cout<<"Blink the LED" << endl;
}

int main(void)//(int argc, char **argv)
{
	if(wiringPiSetup()<0){
		cout<<"setup wiring pi failed"<<endl;
		return 1;
	}
	setup();
	while(1){
		loop();
	}
	
	return 0;
}


```

## Ensamblador
``` asm
@
@ Assembler program to flash three LEDs connected to the
@ Raspberry Pi GPIO port.
@ Instituto Tecnologico de Tijuana
@ Lenguajes de Interfaz
@ Silvia Alejandra Salazar Felix 18212266
@ Practica 3.8

.include "gpiomacros.s"

.global _start             @ Provide program starting address to linker

_start: GPIOExport  pin17
        GPIOExport  pin27
        GPIOExport  pin22

        nanoSleep

        GPIODirectionOut pin17
        GPIODirectionOut pin27
        GPIODirectionOut pin22

        @ setup a loop counter for 10 iterations
        mov         r6, #10

loop:   GPIOWrite   pin17, high
        nanoSleep
        GPIOWrite   pin17, low
        GPIOWrite   pin27, high
        nanoSleep
        GPIOWrite   pin27, low
        GPIOWrite   pin22, high
        nanoSleep
        GPIOWrite   pin22, low

        @decrement loop counter and see if we loop
        subs    r6, #1      @ Subtract 1 from loop register setting status register
        bne     loop        @ If we haven't counted down to 0 then loop

_end:   mov     R0, #0      @ Use 0 return code
        lsl     R0, #2      @ Shift R0 left by 2 bits (ie multiply by 4)
        mov     R7, #1      @ Service command code 1 terminates this program
        svc     0           @ Linus command to terminate program

pin17:      .asciz  "17"
pin27:      .asciz  "27"
pin22:      .asciz  "22"
low:        .asciz  "0"
high:       .asciz  "1"


```
