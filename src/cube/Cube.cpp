//
// Created by vadim on 04.01.2021.
//

#include "Cube.h"

Cube::Cube() {
    x = VALUE_NOT_INIT;
    y = VALUE_NOT_INIT;
    sizes.insert({std::string("w"), VALUE_NOT_INIT});
    sizes.insert({std::string("h"), VALUE_NOT_INIT});
}

Cube::Cube(int x, int y, int w, int h, const std::array<int, 3> &color) {
    this->x = x;
    this->y = y;
    this->sizes.insert({std::string("w"), w});
    this->sizes.insert({std::string("h"), h});
    this->color = color;
    std::copy(color.begin(), color.end(), this->color.begin());
}

void Cube::draw() {

}

void Cube::clear() {

}
