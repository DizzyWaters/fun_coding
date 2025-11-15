#include "Map.hpp"
#include <iostream>

Map::Map(int width, int heigth) 
    : p_width(width), p_higth(heigth) {

        p_tiles.resize(p_higth , std::vector<Tile>(p_width, Tile('.', p_higth)));

        generateSimpleMap();
    }

int Map::getWidth() const
{
    return p_width;
}

int Map::getHight() const
{
    return p_higth;
}

bool Map::isWalkable(int x, int y) const
{
    if(x < 0 || x >= p_width || y < 0 || y >= p_higth)
    {
        return false;
    }
    return p_tiles[y][x].isWalkable();
}

const Tile& Map::getTile(int x, int y) const
{
    return p_tiles[y][x];
}

void Map::draw() const
{
    for(int y = 0; p_higth > y; ++y)
    {
        for(int x = 0; p_width > x; ++x)
        {
            std::cout << p_tiles[y][x].getSymbol(); 
        }
        std::cout << "\n";
    }
}

void Map::generateSimpleMap()
{
    for(int x = 0; p_width > x; ++x)
    {
        p_tiles[0][x] = Tile('#', false);
        p_tiles[p_higth - 1][x] = Tile('#', false);
    }

    for(int y = 0; p_higth > y; ++y)
    {
        p_tiles[y][0] = Tile('#', false);
        p_tiles[y][p_width - 1] = Tile('#', false);
    }
}