//
// Created by jpc on 21.12.16.
//

#ifndef SUNFOUNDER_GPIO_H
#define SUNFOUNDER_GPIO_H


class Gpio {
public:
    static void setPinMode(int pin, int mode);
    static void controlPullUpPullDown(int pin, int pud);
    static int readDigital(int pin);

};


#endif //SUNFOUNDER_GPIO_H
