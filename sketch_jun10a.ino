#include <blink.h>
#include<stdio.h>
#include<Arduino.h>
Blink pin(3);
void setup (){
Blink(3); 
}
void loop(){ 
pin.blink(true,8,225);
}
