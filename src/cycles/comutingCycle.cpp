
#include "computingCycle.hpp"

ComputingCycle::ComputingCycle(const App& _app)
: BaseCycle(_app),
interface(_app.window) {

}

// Getting selected button
void ComputingCycle::inputMouseDown(App& _app) {
    if (settings.click(mouseX, mouseY)) {
        // Updating location
        _app.window.updateTitle();
        restart();
        return;
    } else {
        interface.click(mouseX, mouseY);
    }
    return;
}

// Example for getting keys input
void ComputingCycle::inputKeys(App& _app, SDL_Keycode _key) {
    switch (_key) {
    case SDLK_ESCAPE:
        settings.activate();
        return;
    }
}

void ComputingCycle::update(App& _app) {
    //background.update();
    settings.update(_app);

    // Updating graph
    interface.update(mouseX, mouseY);
}

// Drawing background with all buttons
void ComputingCycle::draw(const App& _app) const {
    // Bliting background
    //background.blit(_app.window);
    _app.window.setDrawColor(BLACK);
    _app.window.clear();

    interface.draw(_app.window);

    // Settings menu
    settings.blit(_app.window);

    // Bliting all to screen
    _app.window.render();
}
