cmake_minimum_required(VERSION 3.17)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractfactory maze_factory.hpp maze_game.hpp maze.hpp room.hpp wall.hpp door.hpp f_maze_factory.cpp f_maze_factory.hpp f_maze.cpp f_maze.hpp f_room.cpp f_room.hpp f_door.cpp f_door.hpp driver.cpp f_wall.cpp f_wall.hpp e_door.cpp e_door.hpp e_maze.cpp e_maze.hpp e_maze_factory.cpp e_maze_factory.hpp e_room.cpp e_room.hpp e_wall.cpp e_wall.hpp)