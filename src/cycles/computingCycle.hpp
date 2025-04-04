/*
 * Copyright (C) 2025, Kazankov Nikolay
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "baseCycle.hpp"
#include "../GUI/baseGUI.hpp"

#include "../computing/grid.hpp"
#include "../computing/graph.hpp"
#include "../computing/interface.hpp"

// Cycle for select variants to start
class ComputingCycle : public BaseCycle {
private:
    GraphInterface interface;

    // New overrided cycle functions
    void inputMouseDown(App& app) override;
    void inputMouseUp(App& app) override;
    void inputKeys(App& app, SDL_Keycode key) override;
    void inputMouseWheel(App& app, float _wheelY) override;
    void inputText(App& app, const char* text) override;

    void update(App& app) override;
    void draw(const App& app) const override;

public:
    ComputingCycle(const App& app);
};
