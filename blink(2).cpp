/*
blink.cpp - Simple example in creating your own Arduino Library
Copyright (c) op from TMM. All right reserved.

*/
 
#include <Arduino.h>
#include "blink.h"

Blink::Blink(int pin){
 pinMode(pin, OUTPUT);
 pinNumber = pin; 
}
 
void Blink::blink(bool value){
 if(value == true){
 for (int a=0; a<=255;a++) { //ѭ����䣬����PWM���ȵ�����
analogWrite(pinNumber,a);
delay(8); //��ǰ���ȼ���ά�ֵ�ʱ��,��λ����
}
for (int a=255; a>=0;a--) { //ѭ����䣬����PWM���ȼ�С
analogWrite(pinNumber,a);
delay(8); //��ǰ���ȵ�ά�ֵ�ʱ��,��λ����
 }
}
}

void Blink::blink(bool value, int blinkLength ){
 if(value == true){
 for (int a=0; a<=255;a++) { //ѭ����䣬����PWM���ȵ�����
analogWrite(pinNumber,a);
delay(blinkLength); //��ǰ���ȼ���ά�ֵ�ʱ��,��λ����
}
for (int a=255; a>=0;a--) { //ѭ����䣬����PWM���ȼ�С
analogWrite(pinNumber,a);
delay(blinkLength); //��ǰ���ȵ�ά�ֵ�ʱ��,��λ����
 }
}
}

 
void Blink::blink(bool value, int blinkLength, int blinkLoops){
 if(value == true){
 for (int a=0; a<=blinkLoops;a++) { //ѭ����䣬����PWM���ȵ�����
analogWrite(pinNumber,a);
delay(blinkLength); //��ǰ���ȼ���ά�ֵ�ʱ��,��λ����
}
for (int a=blinkLoops; a>=0;a--) { //ѭ����䣬����PWM���ȼ�С
analogWrite(pinNumber,a);
delay(blinkLength); //��ǰ���ȵ�ά�ֵ�ʱ��,��λ����
 }
}
}

