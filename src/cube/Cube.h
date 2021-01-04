//
// Created by vadim on 04.01.2021.
//

#ifndef GAME_PROJECT_CUBE_H
#define GAME_PROJECT_CUBE_H

#include "FigureInterface.h"

class Cube : public FigureInterface {
public:
    Cube();
    Cube(int x, int y, int w, int h, const std::array<int, 3> &color);

    void draw() override;
    void clear() override;
};


#endif //GAME_PROJECT_CUBE_H
