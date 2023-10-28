#pragma once
#include <curses.h>
#include <iostream>
#include <unistd.h>
#include <list>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
using namespace std;

class Ventana
{
private:
    int x;
    int y;
    int velocidad;
    int contador;
    bool ejecutar;

public:
    Ventana()
    {
        initscr();
        getmaxyx(stdscr, this->y, this->x);
        this->ejecutar = false;
        this->velocidad = 10;
        this->contador = 20;
        curs_set(FALSE);

        cbreak();
        timeout(100);
        noecho();
        keypad(stdscr, TRUE);
    }

    void actualizar(list<Actualizable *> actualizables)
    {
        for (auto &&actualizable : actualizables)
        {
            actualizable->Actualizar();
        }
    }
    void dibujar(list<Dibujo *> dibujos)
    {
        clear();
        for (auto &&dibujo : dibujos)
        {
            dibujo->Dibujar();
        }
        refresh();
        usleep(41000);
    }
    void cerrar()
    {
        this->ejecutar = false;
    }
    ~Ventana()
    {
        endwin();
    }
};
