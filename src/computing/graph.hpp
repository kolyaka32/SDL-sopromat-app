/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "graph/beam.hpp"
#include <vector>
#include "loads/baseLoad.hpp"
#include "supports/baseSupport.hpp"


class Graph {
public:
    // Structure
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
    void draw(const Window& target) const;
    void load();
    void save();
};
