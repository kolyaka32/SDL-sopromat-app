/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "../../data/window.hpp"


class BaseLoad {
private:
    double value;
    double angle;

public:
    BaseLoad();
    ~BaseLoad();
    void draw(const Window& target) const;
};
