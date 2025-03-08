/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once



#include "point.hpp"


class Line {
public:
    Point& p1;
    Point& p2;
public:
    Line(Point p1, Point p2);
    ~Line();
};
