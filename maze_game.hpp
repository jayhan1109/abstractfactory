//
// Created by Jeongho Han on 11/18/2020.
//

#pragma once

#include "maze_factory.hpp"

class maze_game {
private:
public:
    maze *create_maze(maze_factory &factory) {
        maze *m = factory.create_maze();
        room *r1 = factory.create_room();
        room *r2 = factory.create_room();
        door *d = factory.create_door(*r1, *r2);
        wall *w = factory.create_wall();
        m->add_room(r1);
        m->add_room(r2);
        m->add_door(d);
        m->add_wall(w);
        return m;
    }
};
