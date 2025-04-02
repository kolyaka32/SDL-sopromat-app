/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "baseLoad.hpp"
#include "../graph/node.hpp"

// 
class Force : BaseLoad {
private:
    Node& node;

public:
    Force();
    ~Force();
};
