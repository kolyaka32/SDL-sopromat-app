/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "../../data/window.hpp"


class Buttons {
private:
    /* data */

public:
    Buttons(const Window& target);
    ~Buttons();
    void draw(const Window& target) const;
    void click(float mouseX, float mouseY);
};
