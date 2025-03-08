
#pragma once

#include "../data/window.hpp"

class Grid {
private:
    /* data */
public:
    Grid(const Window& target);
    ~Grid();
    void draw(const Window& target) const;
};
