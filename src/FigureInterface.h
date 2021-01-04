//
// Created by vadim on 04.01.2021.
//

#ifndef GAME_PROJECT_FIGUREINTERFACE_H
#define GAME_PROJECT_FIGUREINTERFACE_H

#include <map>
#include <array>
#include <string>

#define VALUE_NOT_INIT INT32_MAX

class FigureInterface {
protected:
    int x;
    int y;
    std::map<std::string, int> sizes;
    std::array<int, 3> color;
public:
    virtual void draw() = 0;
    virtual void clear() = 0;
};

#endif //GAME_PROJECT_FIGUREINTERFACE_H
