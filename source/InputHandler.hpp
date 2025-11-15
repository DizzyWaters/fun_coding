#ifndef INPUT_HANDLER_HPP
#define INPUT_HANDLER_HPP

#include "Player.hpp"

class InputHandler {
public:
    InputHandler() = default;

    // Reads input and applies it to the player
    void processInput(Player& player, const Map& map);

private:
    char readKey() const;  // Platform-independent simple reader
};

#endif // INPUT_HANDLER_HPP
