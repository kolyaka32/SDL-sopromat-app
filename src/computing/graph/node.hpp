/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once


#include "point.hpp"
#include "../../data/window.hpp"


enum NODE_types {
    NODE_CIRCLE,
    NODE_SINGLE_HIDGE,
    NODE_DOUBLE_HIDGE,
    NODE_SEALING,
};


class Node : public Point {
public:
    SDL_FRect dest;
    SDL_Texture* texture;

public:
    Node(const Window& target, float X, float Y, NODE_types type = NODE_CIRCLE);
    ~Node();
    void setType(const Window& target, NODE_types newType);
    void draw(const Window& target) const;
};
