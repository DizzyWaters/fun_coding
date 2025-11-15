#include "InputHandler.hpp"
#include <iostream>

char InputHandler::readKey() const {
    char c;
    std::cin >> c;
    return c;
}

void InputHandler::processInput(Player& player, const Map& map) {
    char key = readKey();
    player.handleInput(key, map);
}
