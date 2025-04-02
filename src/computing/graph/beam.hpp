/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once


#include "node.hpp"
#include "../../data/window.hpp"

class Beam {
public:
    SDL_FRect dest;
    SDL_Texture* texture;
    const Window& target;
    Node& p1;
    Node& p2;

public:
    Beam(const Window& target, Node& p1, Node& p2);
    ~Beam();
    void draw(const Window& target) const;
};
