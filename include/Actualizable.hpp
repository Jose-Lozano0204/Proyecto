#pragma once
class Actualizable
{
private:
    /* data */
public:
    Actualizable() {}
    virtual void Actualizar() = 0;
    ~Actualizable() {}
};
