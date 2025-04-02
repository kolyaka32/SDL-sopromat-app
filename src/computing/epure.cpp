/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#include "epure.hpp"
#include "../testing.hpp"


Epure::Epure(float _length) {
    length = _length;
}

Epure::~Epure() {

}

float Epure::operator*(Epure& _b) {
    #if CHECK_CORRECTION
    if (_b.squareMember != 0.0) {
        throw "Wrong epure";
    }
    if (_b.length != length) {
        throw "Wrong length";
    }
    #endif

    return (squareMember*length*length*length/3*(_b.freeMember + 3/4*length*_b.linearMember)) + 
        (linearMember*length*length/2*(_b.freeMember + 2/3*length*_b.linearMember)) + 
        (freeMember*length*(_b.freeMember + 1/2*_b.linearMember));
}
