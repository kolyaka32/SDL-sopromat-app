/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#include "interface.hpp"


GraphInterface::GraphInterface(const Window& _target)
: graph(_target),
buttons(_target) {

}

GraphInterface::~GraphInterface() {

}






void GraphInterface::draw(const Window& _target) const {
    graph.draw(_target);
}

// Updating
void GraphInterface::update(float mouseX, float mouseY) {
    graph.update(mouseX, mouseY);
}

void GraphInterface::click(float mouseX, float mouseY) {
    graph.click(mouseX, mouseY);
}

void GraphInterface::unClick(float mouseX, float mouseY) {
    graph.unClick(mouseX, mouseY);
}

void GraphInterface::zoomIn(float mouseX, float mouseY) {
    graph.zoomIn(mouseX, mouseY);
}

void GraphInterface::zoomOut(float mouseX, float mouseY) {
    graph.zoomOut(mouseX, mouseY);
}
