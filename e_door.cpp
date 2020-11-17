//
// Created by Jeongho Han on 11/18/2020.
//

#include <iostream>
#include "e_door.hpp"

void e_door::print() {
    std::cout << "This door has a faery wing for a handle. ";
}

e_door::e_door(room &room1, room &room2) {
    print();
    std::cout << "This door connects Faery Room " << r1 << " and Faery Room " << r2 << std::endl;
}

e_door::~e_door() {
    delete r1;
    delete r2;
}
