/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "../data/window.hpp"
#include "interface/scaleSection.hpp"


// Datatypes for better work with coordinats
typedef float local;
typedef float absolute;
// 2-dim vectors
/*struct locVec2 {
    local x, y;
};
struct absVec2 {
    absolute x, y;
};*/


//
class Grid {
private:
    // Parameters of grid system
    absolute centerX, centerY;
    float scale;

    // Parameters of movement
    bool capture;
    absolute captureX, captureY;

    // Interface
    ScaleSection scaleSection;

public:
    Grid(const Window& target);
    ~Grid();
    void draw(const Window& target) const;
    void update(float mouseX, float mouseY);
    void click(float mouseX, float mouseY);
    void unClick(float mouseX, float mouseY);
    void zoom(float mouseX, float mouseY, float wheelY);

    // Work with local and absolute coordinats
    absolute absoluteX(local localeX) const;
    absolute absoluteY(local localeY) const;
    local localX(absolute X) const;
    local localY(absolute Y) const;
};
