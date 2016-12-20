#include <iostream>
#include <gtkmm/enums.h>
#include <gtkmm/application.h>
#include "LEDWindow.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.hello");
    LEDWindow mainWindow;
    mainWindow.set_position(Gtk::WindowPosition::WIN_POS_CENTER);
    mainWindow.show_all();
    return app->run(mainWindow);
}