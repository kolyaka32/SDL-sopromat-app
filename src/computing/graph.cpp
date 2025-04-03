
#include "graph.hpp"


Graph::Graph(const Window& _target)
: grid(_target) {
    
}

Graph::~Graph() {
    
}

void Graph::addPoint() {
    
}

void Graph::addBeam() {
    
}

void Graph::removeBeam() {
    
}

void Graph::removePoint() {
    
}




void Graph::draw(const Window& _target) const {
    grid.draw(_target);

    // Drawing all beams
    for (auto& it : beams) {
        it.draw(_target);
    }

    for (auto& it : supports) {
        it.draw(_target);
    }

    for (auto& it : loads) {
        it.draw(_target);
    }
}

void Graph::update(float mouseX, float mouseY) {
    grid.update(mouseX, mouseY);
}

void Graph::click(float mouseX, float mouseY) {
    grid.click(mouseX, mouseY);
}

void Graph::unClick(float mouseX, float mouseY) {
    grid.unClick(mouseX, mouseY);
}

void Graph::zoomIn(float mouseX, float mouseY) {
    grid.zoomIn(mouseX, mouseY);
}

void Graph::zoomOut(float mouseX, float mouseY) {
    grid.zoomOut(mouseX, mouseY);
}




void Graph::load() {

}

void Graph::save() const {

}
