/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#include "grid.hpp"
#include "../define.hpp"

Grid::Grid(const Window& _target) {
    capture = false;
    centerX = 0;
    centerY = 0;
    scale = 1;
}

Grid::~Grid() {
    
}

void Grid::draw(const Window& _target) const {
    _target.setDrawColor(WHITE);
    _target.drawRect({localX(20), localY(20), 50/scale, 50/scale});

    // Rendering grid
    for (int i=0; i < 20; ++i) {
        _target.drawLine(localX(i*100), 0, localX(i*100), WINDOW_HEIGHT);
    }

    for (int i=0; i < 20; ++i) {
        _target.drawLine(0, localY(i*100), WINDOW_WIDTH, localY(i*100));
    }
}

void Grid::update(float mouseX, float mouseY) {
    if (capture) {
        // Keeping captured point at it place
        centerX = captureX - mouseX*scale;
        centerY = captureY - mouseY*scale;
        //SDL_Log("Press at %f : %f, get at %f : %f", mouseX, mouseY, centerX, centerY);
    }
}

void Grid::click(float mouseX, float mouseY) {
    capture = true;
    captureX = absoluteX(mouseX);
    captureY = absoluteY(mouseY);
    //SDL_Log("Press at %f : %f, get at %f : %f", mouseX, mouseY, captureX, captureY);
}

void Grid::unClick(float mouseX, float mouseY) {
    capture = false;
}

void Grid::zoom(float mouseX, float mouseY, float wheelY) {
    centerX += mouseX*scale;
    centerY += mouseY*scale;

    scale *= SDL_powf(1.5, -wheelY);

    SET_MIN(scale, 0.1);
    SET_MAX(scale, 20);

    centerX -= mouseX*scale;
    centerY -= mouseY*scale;
}

// Local-absolute transformations
absolute Grid::absoluteX(local _x) const {
    return _x * scale + centerX;
}

absolute Grid::absoluteY(local _y) const {
    return _y * scale + centerY;
}

local Grid::localX(absolute _x) const {
    return (_x - centerX) / scale;
}

local Grid::localY(absolute _y) const {
    return (_y - centerY) / scale;
}
