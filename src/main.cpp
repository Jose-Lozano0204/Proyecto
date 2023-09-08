#include <iostream>
#include <Mascota.hpp>
int main(int argc, char const *argv[])
{
    std::cout << "Juego de Mascotas" << std::endl;
    Mascota m1("Firulais");
    m1.jugar();
    m1.jugar();
    m1.jugar();

    std::cout
    <<m1.Decirnombre() << " tiene " 
    << m1.Decirhambre() <<" de hambre" << std::endl;


    m1.comer(5);
    return 0;
}
