//
// Created by Jeongho Han on 11/18/2020.
//

#pragma once

class maze_factory {
private:
public:
    virtual maze* make_maze() = 0;
    virtual wall* make_wall() = 0;
    virtual room* make_room() = 0;
    virtual door* create_maze(room& r1, room& r2) = 0;
};
