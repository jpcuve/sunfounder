//
// Created by jpc on 21.12.16.
//

#include "Gpio.h"

extern "C" {
    void pinMode(int pin, int mode);
    void pullUpDnControl(int pin, int pud);
    int digitalRead(int pin);
}

void Gpio::setPinMode(int pin, int mode) {
    pinMode(pin, mode);
}

void Gpio::controlPullUpPullDown(int pin, int pud) {
    pullUpDnControl(pin, pud);
}

int Gpio::readDigital(int pin) {
    return digitalRead(pin);
}