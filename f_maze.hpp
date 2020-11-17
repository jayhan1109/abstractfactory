//
// Created by Jeongho Han on 11/18/2020.
//


#include "maze.hpp"

class f_maze : public maze {
private:
public:
    f_maze();

    void print() override;

    ~f_maze();

    void add_room(room *r) override;
    void add_door(door *d) override;
    void add_wall(wall *w) override;

};
