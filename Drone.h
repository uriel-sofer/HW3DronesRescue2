#ifndef DRONE_H
#define DRONE_H

#include "DirectionalVector.h"

class Drone {
private:
    static DirectionalVector TARGET;

    unsigned int instanceID;
    DirectionalVector location;
    DirectionalVector velocity;
    DirectionalVector PB;
    static unsigned int counter;
public:
    Drone();
    Drone(DirectionalVector loc, DirectionalVector vel, const DirectionalVector& target);
    Drone(const Drone& other);
    Drone(Drone&& other);
    Drone& operator=(const Drone& other);
    Drone& operator=(Drone&& other);
    ~Drone();

    unsigned int getID() const;
    DirectionalVector getLocation() const;
    DirectionalVector getVelocity() const;
    void setPB(const DirectionalVector& directional_vector);
    DirectionalVector getPB() const;

    bool isOnTarget(const DirectionalVector& target) const;

    /**
     * Floors the Drone's location to get a nice index
     * @return DirectionalVector matching the drones location, rounded down (floored)
     */
    DirectionalVector floorLocation() const;

    void updateVelocity(const Drone& currentGB);
    void updatePB(const DirectionalVector& target);

    void move(const Drone& currentGB);

    friend std::ostream& operator<<(std::ostream& os, const Drone& d);

};

#endif
