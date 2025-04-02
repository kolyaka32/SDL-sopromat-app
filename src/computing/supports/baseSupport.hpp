/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "../../data/window.hpp"


class BaseSupport {
protected:
    // Draw part
    SDL_FRect dest;
    SDL_Texture* texture;

public:
    BaseSupport();
    ~BaseSupport();
    void draw(const Window& window) const;
};
