/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "../data/window.hpp"
#include "interface/scaleSection.hpp"


//
class Grid {
private:
    float centerX;
    float centerY;
    float scale;

    //
    ScaleSection scaleSection;

public:
    Grid(const Window& target);
    ~Grid();
    void draw(const Window& target) const;
    void click(float mouseX, float mouseY);
    void unClick(float mouseX, float mouseY);
    void zoomIn(float mouseX, float mouseY);
    void zoomOut(float mouseX, float mouseY);

    // Work with
};
