#pragma once
#ifndef TILES_HPP
#define TILES_HPP

class Tile
{
    private:
    char p_symbol;
    bool p_isWalking;
    public:
    Tile(char sym, bool walk);

    char getSymbol() const;
    bool isWalkable() const;
}

#endif
