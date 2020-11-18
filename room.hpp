//
// Created by Jeongho Han on 11/18/2020.
//

#pragma once

class room {
protected:
    int r_num;
    static int e_static_num;
    static int f_static_num;
public:
    virtual void print() = 0;
    virtual int getRoomNum() = 0;
};
