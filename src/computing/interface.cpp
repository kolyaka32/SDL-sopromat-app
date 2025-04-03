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
void GraphInterface::update(float _mouseX, float _mouseY) {
    graph.update(_mouseX, _mouseY);
}

void GraphInterface::click(float _mouseX, float _mouseY) {
    graph.click(_mouseX, _mouseY);
}

void GraphInterface::unClick(float _mouseX, float _mouseY) {
    graph.unClick(_mouseX, _mouseY);
}

void GraphInterface::zoom(float _mouseX, float _mouseY, float _wheelY) {
    graph.zoom(_mouseX, _mouseY, _wheelY);
}
