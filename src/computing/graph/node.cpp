
#include "node.hpp"


Node::Node(const Window& _target, float X, float Y, NODE_types type)
: Point(X, Y),
texture(_target.getTexture(IMG_names(IMG_COMP_CIRCLE + type))) {
    dest = {X-texture->w/2, Y-texture->h/2, float(texture->w), float(texture->h)};
}

Node::~Node() {

}

void Node::setType(const Window& _target, NODE_types _newType) {
    dest.x += dest.w/2;
    dest.y += dest.h/2;
    texture = _target.getTexture(IMG_names(IMG_COMP_CIRCLE + _newType));
    dest.w = float(texture->w);
    dest.h = float(texture->h);
    dest.x -= dest.w/2;
    dest.y -= dest.h/2;
}

void Node::draw(const Window& _target) const {
    _target.blit(texture, dest);
}
