//
// Created by Jeongho Han on 11/18/2020.
//

#pragma once

#include "maze.hpp"
#include "wall.hpp"
#include "door.hpp"

class maze_factory {
private:
public:
    virtual maze *create_maze() = 0;

    virtual wall *create_wall() = 0;

    virtual room *create_room() = 0;

    virtual door *create_door(room &r1, room &r2) = 0;
};
