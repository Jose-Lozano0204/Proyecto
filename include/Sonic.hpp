#include <string>
class Juego
{
private:
    int vida;
    std::string nombre;

public:
    Juego(std::string nombre)
    {
        this->vida = 100;
        this->nombre = nombre;
    }

    ~Juego() {}
    void ataca()
    {
        this->vida += 100;
    }
    void atacan(int atacan)
    {
        this->vida -= atacan;
    }
    std::string Decirnombre()
    {
        return this->nombre;
    }
    int Decirvida()
    {
        return this->vida;
    }
};
