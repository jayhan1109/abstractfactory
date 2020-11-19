//
// Created by Jeongho Han on 11/18/2020.
//


#include "maze.hpp"

class e_maze : public maze {
private:
public:
    e_maze();

    void print() override;

    ~e_maze();

    void add_room(room *r) override;

    void add_door(door *d) override;

    void add_wall(room *r, wall *w) override;

};
