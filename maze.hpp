//
// Created by Jeongho Han on 11/18/2020.
//

#pragma once

#include <vector>
#include "room.hpp"
#include "door.hpp"
#include "wall.hpp"

class maze {
private:
public:
    std::vector<room *> rooms;
    std::vector<door *> doors;
    std::vector<wall *> walls;

    virtual void add_room(room *r) = 0;
    virtual void add_door(door *d) = 0;
    virtual void add_wall(wall *w) = 0;

    virtual void print() = 0;
};
