//
// Created by Jeongho Han on 11/18/2020.
//

#include <iostream>
#include "maze_game.hpp"
#include "f_maze_factory.hpp"
#include "e_maze_factory.hpp"

int main() {
    maze_game game;

    maze_factory *e_fact = new e_maze_factory();
    maze *m = game.create_maze(*e_fact);

    std::cout<<std::endl<<std::endl;

    maze_factory *f_fact = new f_maze_factory();
    maze *d = game.create_maze(*f_fact);

    delete d;
    delete f_fact;
    delete m;
    delete e_fact;
    return 0;
}

