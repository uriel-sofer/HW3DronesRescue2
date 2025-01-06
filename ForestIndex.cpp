#include "ForestIndex.h"


ForestIndex::ForestIndex() : x(0), y(0), dronesCount(0)
{}

ForestIndex::ForestIndex(const int x, const int y)
{
    this->x = x;
    this->y = y;
    dronesCount = 0;
}

ForestIndex::~ForestIndex()
{}

ForestIndex::ForestIndex(const ForestIndex& other)
{
    if (this != &other)
    {
        this->x = other.x;
        this->y = other.y;
        dronesCount = other.dronesCount;
    }
}

ForestIndex::ForestIndex(ForestIndex&& other)
{
    if (this != &other)
    {
        this->x = other.x;
        this->y = other.y;
        this->dronesCount = other.dronesCount;
    }
}

ForestIndex& ForestIndex::operator=(const ForestIndex& other)
{
    if (this != &other)
    {
        this->x = other.x;
        this->y = other.y;
        this->dronesCount = other.dronesCount;
    }
    return *this;
}

ForestIndex& ForestIndex::operator=(ForestIndex&& other)
{
    if (this != &other)
    {
        operator=(other);
    }
    return *this;
}

// Don't care about drones counter
bool ForestIndex::operator==(const ForestIndex& other) const
{
    return this->x == other.x and this->y == other.y;
}

// Don't care about drones counter
bool ForestIndex::operator!=(const ForestIndex& other) const
{
    return !(*this == other);
}

int ForestIndex::get_x() const
{
    return x;
}

void ForestIndex::set_x(const int x)
{
    this->x = x;
}

int ForestIndex::get_y() const
{
    return y;
}

void ForestIndex::set_y(const int y)
{
    this->y = y;
}

unsigned int ForestIndex::get_dronesCount() const
{
    return dronesCount;
}

void ForestIndex::set_dronesCount(const unsigned int dronesCount)
{
    this->dronesCount = dronesCount;
}

void ForestIndex::operator++()
{
    dronesCount++;
}

void ForestIndex::operator++(int)
{
    ++dronesCount;
}

void ForestIndex::operator--()
{
    if (dronesCount > 0)
        dronesCount--;
}

void ForestIndex::operator--(int)
{
    if (dronesCount > 0)
        --dronesCount;
}



