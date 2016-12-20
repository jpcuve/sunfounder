//
// Created by jpc on 20.12.16.
//

#ifndef SUNFOUNDER_LEDWINDOW_H
#define SUNFOUNDER_LEDWINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/grid.h>
#include <gtkmm/switch.h>

class LEDWindow: public Gtk::Window {
private:
    Gtk::Switch m_switch;
public:
    LEDWindow();
    bool switched(bool active);
};

#endif //SUNFOUNDER_LEDWINDOW_H
