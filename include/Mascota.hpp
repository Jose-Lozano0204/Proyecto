#include <string>
class Mascota
{
private:
    int hambre;
    std::string nombre;

public:
    Mascota(std::string nombre)
    {
        this->hambre = 0;
        this->nombre = nombre;
    }

    ~Mascota() {}
    void jugar()
    {
        this->hambre += 5;
    }
    void comer(int comida)
    {
        this->hambre -= comida;
    }
    std::string Decirnombre(){
        return this->nombre;
    }
    int Decirhambre(){
        return this->hambre;
    }
};
