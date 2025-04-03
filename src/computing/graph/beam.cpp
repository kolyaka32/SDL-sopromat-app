

#include "beam.hpp"

Beam::Beam(const Window& _target, Node& _p1, Node& _p2)
: target(_target), p1(_p1), p2(_p2) {

}

Beam::~Beam() {

}

void Beam::draw(const Window& target) const {
    target.drawLine(p1.x, p1.y, p2.x, p2.y);
    //p1.draw(target);
    //p2.draw(target);
}
