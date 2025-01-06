#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <string>
#include "Point.h"
#include "Vector.h"
#include "DirectionalVector.h"

struct Config {
    DirectionalVector target;
    unsigned int iterations;

    Config(Point  target, const unsigned int iterations)
        : target(std::move(target)), iterations(iterations) {}

    Config() : target(Point()), iterations(0) {}
};

struct Init {
    Vector<DirectionalVector> initialLocations;
    Vector<DirectionalVector> speeds;
    int dronesAmount = 0;

    Init() = default; // Does it count as an object? Anyway default is enough
};

/**
* Parses the config.dat file
*/
Config ConfigParser(const std::string& filePath);

/**
* Parses the init.dat file
*/
Init InitParser(const std::string& filePath);

#endif
