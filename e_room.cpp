//
// Created by Jeongho Han on 11/18/2020.
//

#include <iostream>
#include "e_room.hpp"

int room::e_static_num = 0;

void e_room::print() {
    r_num = e_static_num;
    std::cout<< "Faery Room " << r_num << ": This room has faeries in it" << std::endl;
    e_static_num++;
}

e_room::e_room() {
    print();
}

int e_room::getRoomNum() {
    return r_num;
}


