//
// Created by Jeongho Han on 11/18/2020.
//

#pragma once


#include "door.hpp"
#include "room.hpp"

class f_door : public door {
private:
public:
    f_door(room &room1, room &room2);

    ~f_door();

    void print() override;
};

