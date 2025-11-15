#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "Map.hpp"

class Entity {
public:
    Entity(int x, int y, char symbol);

    virtual ~Entity() = default;

    int getX() const;
    int getY() const;
    char getSymbol() const;

    void setPosition(int x, int y);

    // Movement using map walkability
    void move(int dx, int dy, const Map& map);

    // Polymorphic update method
    virtual void update(const Map& map) = 0;

protected:
    int m_x, m_y;
    char m_symbol;
private:
    int health;
    int mana;
    int stamina;
};

#endif
