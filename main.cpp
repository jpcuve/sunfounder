#include <iostream>
#include <gtkmm/enums.h>
#include <gtkmm/application.h>
#include "LEDWindow.h"
#include "BtnAndLedWindow.h"
#include "RgbLedWindow.h"
#include <wiringPi.h>

int main(int argc, char *argv[]) {
	if(wiringPiSetup() == -1){ //when initialize wiring failed,print messageto screen
		printf("setup wiringPi failed !");
		return 1; 
	}
    std::cout << "Hello, World!" << std::endl;
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.hello");
    BtnAndLedWindow mainWindow;
    mainWindow.set_position(Gtk::WindowPosition::WIN_POS_CENTER);
    mainWindow.show_all();
    return app->run(mainWindow);
}
