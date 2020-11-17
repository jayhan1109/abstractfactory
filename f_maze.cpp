//
// Created by Jeongho Han on 11/18/2020.
//

#include <iostream>
#include "f_maze.hpp"

void f_maze::print() {
    std::cout << "An Orwellian dystopian maze" << std::endl;
}

void f_maze::add_room(room *r) {
    // add a room
    rooms.push_back(r);
}

void f_maze::add_door(door *d) {
    doors.push_back(d);
}

void f_maze::add_wall(wall *w) {
    walls.push_back(w);
}

f_maze::~f_maze() {
    for (auto r : rooms) {
        delete r;
    }
}

f_maze::f_maze() {
    print();
}


