#include "Tiles.hpp"


Tile::Tile(char symbol, bool isWalking)
    : p_symbol(symbol), p_isWalking(isWalking){}

char Tile::getSymbol const()
{
    return p_symbol;
}

bool Tile::isWalkable const()
{
    return p_isWalking;
}
