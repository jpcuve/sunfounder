//
// Created by jpc on 12/21/16.
//

#include <stdio.h>

char buffer[128];

int wiringPiSetup(void){
    printf("Wiring Pi Setup\n");
    return 0;
}

int wiringPiSetupSys(void){
    printf("Wiring Pi Setup Sys\n");
    return 0;
}

int wiringPiSetupGpio(void){
    printf("Wiring Pi Setup GPIO\n");
    return 0;
}

int wiringPiSetupPhys(void){
    printf("Wiring Pi Setup Phys\n");
    return 0;
}

void pinModeAlt(int pin, int mode){
    sprintf(buffer, "Pin %d, Alt mode %d\n", pin, mode);
    printf(buffer);
}

void pinMode(int pin, int mode){
    sprintf(buffer, "Pin %d, Mode %d\n", pin, mode);
    printf(buffer);
}

void pullUpDnControl(int pin, int pud){
    sprintf(buffer, "Pull up/down control Pin %d, Pud %d\n", pin, pud);
    printf(buffer);
}

int digitalRead(int pin){
    return 0;
}

void digitalWrite(int pin, int value){
    sprintf(buffer, "Digital Write Pin %d, Value %d\n", pin, value);
    printf(buffer);
}

void pwmWrite(int pin, int value){
    sprintf(buffer, "PWM Write Pin %d, Value %d\n", pin, value);
    printf(buffer);
}

int  analogRead(int pin){
    return 0;
}

void analogWrite(int pin, int value){
    sprintf(buffer, "Analog Write Pin %d, Value %d\n", pin, value);
    printf(buffer);
}
