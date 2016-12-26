//
// Created by jpc on 12/26/16.
//

#ifndef SUNFOUNDER_RGBLEDWINDOW_H
#define SUNFOUNDER_RGBLEDWINDOW_H


#include <gtkmm/window.h>
#include <gtkmm/scale.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>

class RgbLedWindow: public Gtk::Window {
private:
    Gtk::Box m_box;
    Gtk::Label m_label;
    Gtk::Scale m_r;
    Gtk::Scale m_g;
    Gtk::Scale m_b;
public:
    RgbLedWindow();
    void valueChanged();

};


#endif //SUNFOUNDER_RGBLEDWINDOW_H
