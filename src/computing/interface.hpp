/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "../data/window.hpp"

class GraphInterface {
private:
    
public:
    GraphInterface(const Window& target);
    ~GraphInterface();
    void draw(const Window& target) const;
    void click(float mouseX, float mouseY);
    void unClick(float mouseX, float mouseY);
    void zoomIn(float mouseX, float mouseY);
    void zoomOut(float mouseX, float mouseY);
};
