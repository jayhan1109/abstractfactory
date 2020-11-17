//
// Created by Jeongho Han on 11/18/2020.
//

#include "e_maze_factory.hpp"
#include "e_maze.hpp"
#include "e_room.hpp"
#include "e_door.hpp"
#include "e_wall.hpp"

maze *e_maze_factory::create_maze() {
    return new e_maze();
}

wall *e_maze_factory::create_wall() {
    return new e_wall();
}

room *e_maze_factory::create_room() {
    return new e_room();
}

door *e_maze_factory::create_door(room &r1, room &r2) {
    return new e_door(r1, r2);
}

