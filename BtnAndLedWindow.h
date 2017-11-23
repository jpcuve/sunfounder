//
// Created by jpc on 21.12.16.
//

#ifndef SUNFOUNDER_BTNANDLEDWINDOW_H
#define SUNFOUNDER_BTNANDLEDWINDOW_H


#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/label.h>

class BtnAndLedWindow: public Gtk::Window {
private:
    Gtk::Label m_label;
    sigc::connection m_timer;
    int m_state;
    void setState(int);
public:
    BtnAndLedWindow();
    ~BtnAndLedWindow();
    bool timeout();
};


#endif //SUNFOUNDER_BTNANDLEDWINDOW_H
