//
// Created by Jeongho Han on 11/18/2020.
//

#include <iostream>
#include "f_room.hpp"

int room::f_static_num = 0;
void f_room::print() {
    r_num = f_static_num;
    std::cout << "Dystopian Room " << r_num << ": This room has communist pigs in it" << std::endl;
    f_static_num++;
}

f_room::f_room() {
    print();
}

int f_room::getRoomNum() {
    return r_num;
}


