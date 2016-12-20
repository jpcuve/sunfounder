//
// Created by jpc on 20.12.16.
//

#include "LEDWindow.h"
#include <iostream>
#include <wiringPi.h>

extern "C" {
	void pinMode(int pin, int mode);
	void digitalWrite(int pin, int value);
}

LEDWindow::LEDWindow() {
    set_title("01_LED");
    m_switch.set_state(FALSE);
    m_switch.signal_state_set().connect(sigc::mem_fun(*this, &LEDWindow::switched), false);
    add(m_switch);
    pinMode(0, OUTPUT);
}

bool LEDWindow::switched(bool active) {
    if (active){
        std::cout << "on";
        digitalWrite(0, LOW);
    } else {
        std::cout << "off";
        digitalWrite(0, HIGH);
    }
    std::cout << std::endl;
    return false;
}
