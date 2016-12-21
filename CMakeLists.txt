cmake_minimum_required(VERSION 3.6)
project(sunfounder)

set(CMAKE_CXX_STANDARD 11)
find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-3.0)
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})
# Add other flags to the compiler
add_definitions(${GTKMM_CFLAGS_OTHER})

set(SOURCE_FILES main.cpp LEDWindow.cpp LEDWindow.h wiringPoMockup.c BtnAndLedWindow.cpp BtnAndLedWindow.h Gpio.cpp Gpio.h)
add_executable(sunfounder ${SOURCE_FILES})
target_link_libraries(sunfounder ${GTKMM_LIBRARIES})
