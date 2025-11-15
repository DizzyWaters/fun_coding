#pragma once
#ifndef MAP_HPP
#define MAP_HPP

#include "Tiles.hpp"
#include <vector>

class Map
{
    private:
    int p_width;
    int p_higth;
    std::vector<std::vector<Tile>> p_tiles;
    void generateSimpleMap();

    public:

    Map(int width, int higth);
    int getWidth() const;
    int getHight() const;

    bool isWalkable(int x, int y) const;
    const Tile& getTile(int x, int y) const; 

    void draw() const;

};



#endif
