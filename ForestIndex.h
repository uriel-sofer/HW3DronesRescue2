#ifndef FORESTINDEX_H
#define FORESTINDEX_H

/**
 * Kind of a tuple for a coordinate
 */
struct GridIndex
{
    int x;
    int y;

    GridIndex(const int x = 0, const int y = 0) : x(x), y(y) {}

    bool operator==(const GridIndex& grid_index) const
    {
        return x == grid_index.x && y == grid_index.y;
    }

    bool operator!=(const GridIndex& grid_index) const
    {
        return !this->operator==(grid_index);
    }
};

/**
 * Used to counts drones in each coordinate in the forest
 */
class ForestIndex {
    int x;
    int y;
    unsigned int dronesCount;

public:
    ForestIndex();
    ForestIndex(int x, int y);
    ~ForestIndex();
    ForestIndex(const ForestIndex& other);
    ForestIndex(ForestIndex&& other);
    ForestIndex& operator=(const ForestIndex& other);
    ForestIndex& operator=(ForestIndex&& other);

    bool operator==(const ForestIndex& other) const;
    bool operator!=(const ForestIndex& other) const;

    int get_x() const;
    void set_x(int x);
    int get_y() const;
    void set_y(int y);
    unsigned int get_dronesCount() const;
    void set_dronesCount(unsigned int dronesCount);

    void operator++();
    void operator++(int);
    void operator--(int);
    void operator--();

};

#endif //FORESTINDEX_H
