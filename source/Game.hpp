#pragma once
#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <memory>

#include "Map.hpp"
#include "Player.hpp"


class Game
{
    public:
    void run();
    private:
    Map map;
    Player player;

    std::vector<std::unique_ptr<Monster>> monsters;
    void update();
    void draw();

}





#endif