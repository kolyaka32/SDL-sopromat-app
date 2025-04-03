/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "graph/beam.hpp"
#include <vector>
#include "grid.hpp"
#include "loads/baseLoad.hpp"
#include "supports/baseSupport.hpp"


class Graph {
public:
    // Location operation system
    Grid grid;

    // Graph structure
    std::vector<Node> nodes{};
    std::vector<Beam> beams{};

    // Loads
    std::vector<BaseLoad> loads{};

    // Supports
    std::vector<BaseSupport> supports{};

public:
    Graph(const Window& target);
    ~Graph();
    void addPoint();
    void addBeam();
    void removeBeam();
    void removePoint();

    // Working with app
    void draw(const Window& target) const;
    // Updating place
    void update(float mouseX, float mouseY);
    void click(float mouseX, float mouseY);
    void unClick(float mouseX, float mouseY);
    void zoom(float mouseX, float mouseY, float wheelY);

    // Save system
    void load();
    void save() const;
};
