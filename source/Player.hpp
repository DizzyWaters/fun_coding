#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Entity.hpp"

class Player : public Entity {
public:
    Player(int x, int y);

    // handle input and move player
    void handleInput(char input, const Map& map);

    // Player does not auto-move
    void update(const Map& map) override;
};

#endif // PLAYER_HPP
