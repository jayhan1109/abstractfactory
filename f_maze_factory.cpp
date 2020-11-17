//
// Created by Jeongho Han on 11/18/2020.
//

#include "f_maze_factory.hpp"
#include "f_maze.hpp"
#include "f_room.hpp"
#include "f_door.hpp"
#include "f_wall.hpp"

maze *f_maze_factory::create_maze() {
    return new f_maze();
}

wall *f_maze_factory::create_wall() {
    return new f_wall();
}

room *f_maze_factory::create_room() {
    return new f_room();
}

door *f_maze_factory::create_door(room &r1, room &r2) {
    return new f_door(r1, r2);
}

