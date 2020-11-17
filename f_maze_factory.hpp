//
// Created by Jeongho Han on 11/18/2020.
//

#include "maze_factory.hpp"

class f_maze_factory : public maze_factory {
private:
public:
    maze *create_maze() override;

    wall *create_wall() override;

    room *create_room() override;

    door *create_door(room &r1, room &r2) override;

};


