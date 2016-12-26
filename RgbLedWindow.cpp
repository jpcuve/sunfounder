//
// Created by jpc on 12/26/16.
//

#include <iostream>
#include "RgbLedWindow.h"

RgbLedWindow::RgbLedWindow() :
        m_box(Gtk::ORIENTATION_VERTICAL),
        m_label("Color"),
        m_r(Gtk::ORIENTATION_HORIZONTAL),
        m_g(Gtk::ORIENTATION_HORIZONTAL),
        m_b(Gtk::ORIENTATION_HORIZONTAL) {
    add(m_box);
    m_box.pack_start(m_label);
    m_r.set_range(0.0, 255.0);
    m_r.signal_value_changed().connect(sigc::mem_fun(*this, &RgbLedWindow::valueChanged));
    m_box.pack_start(m_r);
    m_g.set_range(0.0, 255.0);
    m_g.signal_value_changed().connect(sigc::mem_fun(*this, &RgbLedWindow::valueChanged));
    m_box.pack_start(m_g);
    m_b.set_range(0.0, 255.0);
    m_b.signal_value_changed().connect(sigc::mem_fun(*this, &RgbLedWindow::valueChanged));
    m_box.pack_start(m_b);
    set_size_request(400, 50);
}

void RgbLedWindow::valueChanged() {
    char *buffer = new char[50]();
    sprintf(buffer, "Color: %d,%d,%d", (int) m_r.get_value(), (int) m_g.get_value(), (int) m_b.get_value());
    m_label.set_text(buffer);
}