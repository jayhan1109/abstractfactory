//
// Created by Jeongho Han on 11/18/2020.
//

#pragma once

#include "room.hpp"

class door {
private:
public:
    room *r1;
    room *r2;

    virtual void print() = 0;
};
