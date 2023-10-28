#pragma once
#include <Dibujo.hpp>
#include <curses.h>

class Marco
{
private:
    /* data */
public:
    Marco(/* args */);
    ~Marco();

    void Dibujar()
    {
        box(stdscr, '|', '#');
    }
};
