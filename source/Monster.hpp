#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "Entity.hpp"

class Monster : public Entity 
{
public:
    Monster(int x, int y);

    void update(const Map& map) override;

private:
};

#endif // MONSTER_HPP
