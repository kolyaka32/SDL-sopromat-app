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
    _target.drawPoint(localX(0), localY(0));
}

void Grid::update(float mouseX, float mouseY) {
    if (capture) {
        // Keeping captured point at it place
        centerX = absoluteX(mouseX) - captureX;
        centerY = absoluteX(mouseY) - captureY;
    }
}

void Grid::click(float mouseX, float mouseY) {
    capture = true;
    captureX = absoluteX(mouseX);
    captureY = absoluteY(mouseY);
}

void Grid::unClick(float mouseX, float mouseY) {
    capture = false;
}

void Grid::zoomIn(float mouseX, float mouseY) {
    scale *= 1.2;
}

void Grid::zoomOut(float mouseX, float mouseY) {
    scale /= 1.2;
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
