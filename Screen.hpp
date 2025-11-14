#pragma once

#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <vector>
#include <stdexcept> 

class Screen
{
    private:
        std::vector<std::vector<char>> data;
        int rows;
        int columns;
    public:
        Screen(int x, int y, char fill = ' ')
            : data(y, std::vector<char>(x, fill))
              , rows(x)
              , columns(y) {}
    
    char& at (int x, int y);
    const char& at (int x, int y) const;
    // operators
    char& operator()(int x, int y);
    const char& operator()(int x, int y) const;

    int rowCount() const;
    int columnCount() const;
};   



#endif
