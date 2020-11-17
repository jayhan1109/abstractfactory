//
// Created by Jeongho Han on 11/18/2020.
//

#include <iostream>
#include "e_maze.hpp"

void e_maze::print() {
    std::cout << "A pretty, magical faery maze" << std::endl;
}

void e_maze::add_room(room *r) {
    // add a room
    rooms.push_back(r);
}

void e_maze::add_door(door *d) {
    doors.push_back(d);
}

void e_maze::add_wall(wall *w) {
    walls.push_back(w);
}

e_maze::~e_maze() {
    for (auto r : rooms) {
        delete r;
    }
}

e_maze::e_maze() {
    print();
}


