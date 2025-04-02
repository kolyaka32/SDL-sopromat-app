/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once


class Epure {
private:
    float length;

    // Polinomial part
    float freeMember;    // (x-x0)^0
    float linearMember;  // (x-x0)^1
    float squareMember;  // (x-x0)^2

public:
    Epure(float length);
    ~Epure();
    float operator*(Epure& linearEpure);
};
