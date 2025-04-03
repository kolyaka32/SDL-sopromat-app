/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "graph.hpp"
#include "interface/buttons.hpp"

class GraphInterface {
private:
    Graph graph;
    Buttons buttons;

public:
    GraphInterface(const Window& target);
    ~GraphInterface();

    // Working with app
    void draw(const Window& target) const;
    // Updating place
    void update(float mouseX, float mouseY);
    void click(float mouseX, float mouseY);
    void unClick(float mouseX, float mouseY);
    void zoomIn(float mouseX, float mouseY);
    void zoomOut(float mouseX, float mouseY);
};
