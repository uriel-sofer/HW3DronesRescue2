cmake_minimum_required(VERSION 3.29)
project(HW3DronesRescue)

set(CMAKE_CXX_STANDARD 20)

add_executable(HW3DronesRescue main.cpp
        DirectionalVector.cpp
        DirectionalVector.h
        Drone.cpp
        Drone.h
        FileHandler.cpp
        FileHandler.h
        ForestIndex.cpp
        ForestIndex.h
        Point.cpp
        Point.h
        Simulation.cpp
        Simulation.h
        Vector.h)
