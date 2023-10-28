#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Sonic : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Sonic(/* args */) : Dibujo("titulo")
    {
    }
    ~Sonic() {}
    void Actualizar()
    {
    }
};
