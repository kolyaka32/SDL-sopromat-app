/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#include "data/app.hpp"

// Cycles
#include "cycles/selectCycle.hpp"
#include "cycles/computingCycle.hpp"


// Function with selecting starting cycle
void App::run() {
    // Running application
    while (running) {
        // Switching between running options
        switch (nextCycle) {
        case CYCLE_MENU:
            {
                // Cycle with game menu and selection of mode
                SelectCycle cycle(*this);
                cycle.run(*this);
            }
            break;

        case CYCLE_COMPUTING:
            {
                // Cycle with game menu and selection of mode
                ComputingCycle cycle(*this);
                cycle.run(*this);
            }
            break;

        // Stopping current process
        case CYCLE_NONE:
        default:
            running = false;
            break;
        }
    }
    
}

// Function for setting window title depend on language
void Window::updateTitle() const {
    // Setting window title
    switch (currentLanguage) {
    case LNG_ENGLISH:
        updateTitle("Chess on SDL");
        break;

    case LNG_RUSSIAN:
        updateTitle("Шахматы на SDL");
        break;

    case LNG_GERMAN:
        updateTitle("Schach на SDL");
        break;

    case LNG_BELARUSIAN:
        updateTitle("Шахматы на SDL");
        break;
    }
}
