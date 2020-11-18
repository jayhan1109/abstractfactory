//
// Created by Jeongho Han on 11/18/2020.
//

#include <iostream>
#include "f_door.hpp"

void f_door::print() {
    std::cout << "This door has a soma pill for a handle. ";
}

f_door::f_door(room &r1, room &r2) {
    print();
    std::cout << "This door connects Dystopian Room " << r1.getRoomNum() << " and Dystopian Room " << r2.getRoomNum() << std::endl;
}

f_door::~f_door() {
    delete r1;
    delete r2;
}
