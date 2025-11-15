#include "Player.hpp"

Player::Player(int x, int y)
    : Entity(x, y, '@')
{
}

void Player::handleInput(char input, const Map& map) {
    switch (input) {
        case 'w': move(0, -1, map); break;
        case 's': move(0, 1, map); break;
        case 'a': move(-1, 0, map); break;
        case 'd': move(1, 0, map); break;
        default: break;
    }
}

void Player::update(const Map& map) {
    // Player does nothing automatically
}
