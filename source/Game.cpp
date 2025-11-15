#include "Game.hpp"
#include <iostream>
#include <cstdlib>   // rand()
#include <ctime>     // time()

Game::Game()
    : map(40, 20),        // Map size
      player(5, 5)        // Player start position
{
    std::srand(std::time(nullptr)); // seed RNG

    // Spawn a few monsters
    monsters.push_back(std::make_unique<Monster>(10, 10));
    monsters.push_back(std::make_unique<Monster>(20, 5));
    monsters.push_back(std::make_unique<Monster>(30, 15));
}

void Game::run()
{
    while (true)
    {
        draw();
        update();
    }
}

void Game::update()
{
    // Handle input
    char key;
    std::cin >> key;
    player.handleInput(key, map);

    // Update monsters
    for (auto& m : monsters)
        m->update(map);
}

void Game::draw()
{
    system("clear"); // Linux/macOS
    // system("CLS"); // Windows

    // Draw the map first
    for (int y = 0; y < map.getHight(); ++y)
    {
        for (int x = 0; x < map.getWidth(); ++x)
        {
            bool drawn = false;

            // Player?
            if (player.getX() == x && player.getY() == y)
            {
                std::cout << player.getSymbol();
                drawn = true;
            }

            // Monsters?
            if (!drawn)
            {
                for (auto& m : monsters)
                {
                    if (m->getX() == x && m->getY() == y)
                    {
                        std::cout << m->getSymbol();
                        drawn = true;
                        break;
                    }
                }
            }

            // Tile?
            if (!drawn)
            {
                std::cout << map.getTile(x, y).getSymbol();
            }
        }
        std::cout << "\n";
    }
}
