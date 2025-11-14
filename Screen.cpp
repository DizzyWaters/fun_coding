#include "Screen.hpp"


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
    
    char& at (int x, int y)
    {
        if(x < 0 || x >= rows || y < 0 || y >= columns)
        {
        throw std::out_of_range("Screen:at - Index is out of range exp");
        }
        return data[x][y];
    }
    const char& at (int x, int y) const
    {
        if(x < 0 || x >= rows || y < 0 || y >= columns)
        {
        throw std::out_of_range("Screen:at - Index is out of range exp");
        }
        return data[x][y];
    }
    // operators
    char& operator()(int x, int y)
    {
        return at(x,y);
    }
    const char& operator()(int x, int y) const
    {
        return at(x,y);
    }

    int rowCount() const
    {
        return rows;
    }
    int columnCount() const
    {
        return columns;
    }
};   
