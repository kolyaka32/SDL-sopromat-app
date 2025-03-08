/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#include "selectCycle.hpp"


// Starting basic template with main theme
SelectCycle::SelectCycle(const App& _app)
: BaseCycle(_app),
titleText{_app.window, {"Sopromat app", "Сопромат приложуха", "Schach", "Шахматы"}, 64, 0.5, 0.1, 3, WHITE},
singleplayerButton{_app.window, {"Computing", "Расчёт", "Einzelspiel", "Адзіночная гульня"}, 24, 0.5, 0.3, WHITE},
twoPlayerButton{_app.window, {"нихт", "нихт", "Zwei Spieler", "Два гульца"}, 24, 0.5, 0.5, WHITE},
serverButton{_app.window, {"нихт", "нихт", "Server erstellen", "Стварыць сервер"}, 24, 0.5, 0.7, WHITE},
connectButton{_app.window, {"нихт", "нихт", "Beitreten", "Далучыцца"}, 24, 0.5, 0.9, WHITE} {
    // Starting menu song (if wasn't started)
    if(!isRestarted()) {
        _app.music.start(MUS_MENU);
    }
}

// Getting selected button
void SelectCycle::getMouseInput(App& _app) {
    if (settings.click(mouseX, mouseY)) {
        // Updating location
        _app.window.updateTitle();
        restart();
        return;
    } else if (!settings.isActive()) {
        if (singleplayerButton.in(mouseX, mouseY)) {
            _app.startNextCycle(CYCLE_COMPUTING);
            stop();
        } else if (twoPlayerButton.in(mouseX, mouseY)) {
            _app.startNextCycle(CYCLE_NONE);
            stop();
        } else if (serverButton.in(mouseX, mouseY)) {
            _app.startNextCycle(CYCLE_NONE);
            stop();
        } else if (connectButton.in(mouseX, mouseY)) {
            _app.startNextCycle(CYCLE_NONE);
            stop();
        }
    }
    return;
}

// Example for getting keys input
void SelectCycle::getKeysInput(App& _app, SDL_Keycode _key) {
    switch (_key) {
    case SDLK_ESCAPE:
        settings.activate();
        return;
    }
}

void SelectCycle::update(App& _app) {
    //background.update();
    settings.update(_app);
}

// Drawing background with all buttons
void SelectCycle::draw(const App& _app) const {
    // Bliting background
    //background.blit(_app.window);
    _app.window.setDrawColor(BLACK);
    _app.window.clear();

    // Bliting title
    titleText.blit(_app.window);

    // Blitting start buttons
    singleplayerButton.blit(_app.window);
    twoPlayerButton.blit(_app.window);
    serverButton.blit(_app.window);
    connectButton.blit(_app.window);

    // Settings menu
    settings.blit(_app.window);

    // Bliting all to screen
    _app.window.render();
}
