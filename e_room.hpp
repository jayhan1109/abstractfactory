//
// Created by Jeongho Han on 11/18/2020.
//

#pragma once

#include "room.hpp"

class e_room : public room {
private:
public:
    e_room();
    void print() override;
    int getRoomNum() override;
};
