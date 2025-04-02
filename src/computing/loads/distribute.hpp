/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "baseLoad.hpp"
#include "../graph/beam.hpp"


class Distribude : BaseLoad {
private:
    Beam& node;

public:
    Distribude();
    ~Distribude();
};
