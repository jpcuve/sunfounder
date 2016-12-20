//
// Created by jpc on 20.12.16.
//

#include "LEDWindow.h"
#include <iostream>

LEDWindow::LEDWindow() {
    set_title("01_LED");
    m_switch.set_state(FALSE);
    m_switch.signal_state_set().connect(sigc::mem_fun(*this, &LEDWindow::switched), false);
    add(m_switch);
}

bool LEDWindow::switched(bool active) {
    if (active){
        std::cout << "on";
    } else {
        std::cout << "off";
    }
    std::cout << std::endl;
    return false;
}