//
// Created by jpc on 21.12.16.
//

#include <iostream>
#include <glibmm.h>
#include <wiringPi.h>
#include "BtnAndLedWindow.h"
#include "Gpio.h"

BtnAndLedWindow::BtnAndLedWindow(){
    set_title("02_BtnAndLed");
    m_timer = Glib::signal_timeout().connect(sigc::mem_fun(*this, &BtnAndLedWindow::timeout), 100);
    setState(1);
    add(m_label);
    Gpio::setPinMode(1, INPUT);
    Gpio::controlPullUpPullDown(1, PUD_UP);
}

BtnAndLedWindow::~BtnAndLedWindow(){
    m_timer.disconnect();
}

void BtnAndLedWindow::setState(int state){
	if (state != m_state){
		m_state = state;
		m_label.set_markup(m_state ? "<span foreground='red' size='x-large'>OFF</span>" : "<span foreground='green' size='x-large'>ON</span>");
	}
}

bool BtnAndLedWindow::timeout() {
    int state = Gpio::readDigital(1);
    setState(state);
    return true;
}
