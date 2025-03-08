/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "../data/window.hpp"

class GraphInterface {
private:
    
public:
    GraphInterface(const Window& target);
    ~GraphInterface();
    void draw(const Window& target) const;
};
