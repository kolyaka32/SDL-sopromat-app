/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#include "grid.hpp"


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
    _target.drawRect({localX(20), localY(20), 50*scale, 50*scale});
}

void Grid::update(float mouseX, float mouseY) {
    if (capture) {
        // Keeping captured point at it place
        centerX = captureX - mouseX/scale;
        centerY = captureY - mouseY/scale;
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
    
    centerX += mouseX/scale;
    centerY += mouseY/scale;

    //scale += wheelY;
    if (scale > 0) {
        scale *= SDL_powf(1.5, wheelY);
    } else {
        scale /= SDL_powf(1.5, -wheelY);
    }

    centerX -= mouseX/scale;
    centerY -= mouseY/scale;
}

// Local-absolute transformations
absolute Grid::absoluteX(local _x) const {
    return _x / scale + centerX;
}

absolute Grid::absoluteY(local _y) const {
    return _y / scale + centerY;
}

local Grid::localX(absolute _x) const {
    return (_x - centerX) * scale;
}

local Grid::localY(absolute _y) const {
    return (_y - centerY) * scale;
}
