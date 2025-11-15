#include "Entity.hpp"

Entity::Entity(int x, int y, char symbol)
    : m_x(x), m_y(y), m_symbol(symbol)
{
}

int Entity::getX() const { return m_x; }
int Entity::getY() const { return m_y; }
char Entity::getSymbol() const { return m_symbol; }

void Entity::setPosition(int x, int y) {
    m_x = x;
    m_y = y;
}

void Entity::move(int dx, int dy, const Map& map) {
    int newX = m_x + dx;
    int newY = m_y + dy;

    if (map.isWalkable(newX, newY)) {
        m_x = newX;
        m_y = newY;
    }
}
