/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "graph/beam.hpp"
#include <vector>


class Graph {
public:
    std::vector<Node> nodes{};
    std::vector<Beam> beams{};
public:
    Graph(const Window& target);
    ~Graph();
    void addPoint();
    void addBeam();
    void removeBeam();
    void removePoint();
    void draw(const Window& target) const;
    void load();
    void save();
};
