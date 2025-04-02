/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "../../data/window.hpp"

class ScaleSection {
private:


public:
    ScaleSection();
    ~ScaleSection();
    void draw(const Window& target) const;
    void setScale(float newScale);
};
