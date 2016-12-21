//
// Created by jpc on 21.12.16.
//

#include <glibmm.h>
#include <wiringPi.h>
#include "BtnAndLedWindow.h"
#include "Gpio.h"

BtnAndLedWindow::BtnAndLedWindow(){
    set_title("02_BtnAndLed");
    m_timer = Glib::signal_timeout().connect(sigc::mem_fun(*this, &BtnAndLedWindow::timeout), 100);
    m_label.set_markup("<span foreground='red' size='x-large'>OFF</span>");
    add(m_label);
    Gpio::setPinMode(1, INPUT);
    Gpio::controlPullUpPullDown(1, PUD_UP);
}

BtnAndLedWindow::~BtnAndLedWindow(){
    m_timer.disconnect();
}

bool BtnAndLedWindow::timeout() {
    int state = Gpio::readDigital(1);
    if (state == 0){ // pressed
    }
    return true;
}