/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "../data/cycleTemplate.hpp"
#include "../interface/SettingsMenu.hpp"

// Base cycle for use in any game mode
class BaseCycle : public CycleTemplate {
 protected:
    SettingsMenu settings;     // Menu for change settings
    const GUI::ImageButton exitButton;  // Button for exit from mode

 public:
    BaseCycle(const App& app);
    void inputMouseDown(App& app) override;
    void inputMouseUp(App& app) override;
    void inputMouseWheel(App& app, float _wheelY) override;
    void update(App& app) override;
};
