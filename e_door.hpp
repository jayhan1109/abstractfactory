//
// Created by Jeongho Han on 11/18/2020.
//

#pragma once


#include "door.hpp"
#include "room.hpp"

class e_door : public door {
private:
public:
    e_door(room &room1, room &room2);

    ~e_door();

    void print() override;
};

