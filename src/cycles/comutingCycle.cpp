
#include "computingCycle.hpp"

ComputingCycle::ComputingCycle(const App& _app)
: BaseCycle(_app),
grid(_app.window),
field(_app.window),
interface(_app.window) {

}

// Getting selected button
void ComputingCycle::getMouseInput(App& _app) {
    if (settings.click(mouseX, mouseY)) {
        // Updating location
        _app.window.updateTitle();
        restart();
        return;
    }
    return;
}

// Example for getting keys input
void ComputingCycle::getKeysInput(App& _app, SDL_Keycode _key) {
    switch (_key) {
    case SDLK_ESCAPE:
        settings.activate();
        return;
    }
}

void ComputingCycle::update(App& _app) {
    //background.update();
    settings.update(_app);
}

// Drawing background with all buttons
void ComputingCycle::draw(const App& _app) const {
    // Bliting background
    //background.blit(_app.window);
    _app.window.setDrawColor(BLACK);
    _app.window.clear();

    // Bliting title
    grid.draw(_app.window);

    field.draw(_app.window);

    interface.draw(_app.window);

    // Settings menu
    settings.blit(_app.window);

    // Bliting all to screen
    _app.window.render();
}
