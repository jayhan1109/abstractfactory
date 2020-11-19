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
        wall *w1 = factory.create_wall();
        wall *w2 = factory.create_wall();
        wall *w3 = factory.create_wall();
        wall *w4 = factory.create_wall();
        wall *w5 = factory.create_wall();
        wall *w6 = factory.create_wall();
        wall *w7 = factory.create_wall();
        wall *w8 = factory.create_wall();
        m->add_room(r1);
        m->add_room(r2);
        m->add_door(d);

        // Add walls to room1
        m->add_wall(r1, w1);
        m->add_wall(r1, w2);
        m->add_wall(r1, w3);
        m->add_wall(r1, w4);

        // Add walls to room2
        m->add_wall(r2, w5);
        m->add_wall(r2, w6);
        m->add_wall(r2, w7);
        m->add_wall(r2, w8);
        return m;
    }
};
