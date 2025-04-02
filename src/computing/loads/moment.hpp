/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "baseLoad.hpp"
#include "../graph/node.hpp"


class Moment : BaseLoad {
private:
    Node& node;

public:
    Moment(/* args */);
    ~Moment();
};
