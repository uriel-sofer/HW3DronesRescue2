#ifndef SIMULATION_H
#define SIMULATION_H

#include "DirectionalVector.h"
#include "Drone.h"
#include "FileHandler.h"
#include "ForestIndex.h"

class Simulation {
private:
    unsigned int DroneCounter;
    DirectionalVector target;        // Target location
    const size_t AMOUNT;
    Drone* drones;
    unsigned int iterations;         // Number of simulation steps
    size_t globalBestIndex;          // Index of the global best drone
    ForestIndex forest[Point::MAX_WIDTH_X][Point::MAX_HEIGHT_Y];

public:
    Simulation(const Config& config, const Init& init);
    ~Simulation();
    void run();
    void updateGlobalBest(size_t currentIndex);
    void updatePersonalBest(size_t currentIndex) const;
    void printState() const;
    void saveState(const std::string& outputFile) const;
    static GridIndex getGridIndex(const DirectionalVector& position) ;

    const DirectionalVector& getTarget() const;

    unsigned int operator()(unsigned int x, unsigned int y) const;
};

#endif
