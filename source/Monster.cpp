#include "Monster.hpp"
#include <cstdlib> // rand()

Monster::Monster(int x, int y)
    : Entity(x, y, 'M')
{
}

void Monster::update(const Map& map) {
    // Very simple random movement
    int r = rand() % 4;

    switch (r) {
        case 0: move(0, -1, map); break; // up
        case 1: move(0, 1, map); break;  // down
        case 2: move(-1, 0, map); break; // left
        case 3: move(1, 0, map); break;  // right
    }
}
