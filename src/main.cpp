#include <iostream>
#include <Mascota.hpp>
#include <Sonic.hpp>
int main(int argc, char const *argv[])
{
    std::cout << "Juego de Mascotas" << std::endl;
    Mascota m1("Firulais");
    m1.jugar();
    m1.jugar();
    m1.jugar();

    std::cout
        << m1.Decirnombre() << " tiene "
        << m1.Decirhambre() << " de hambre" << std::endl;

    m1.comer(5);

    std::cout << "Video Juego" << std::endl;
    Juego j1("Sonic");
    j1.ataca();
    j1.ataca();
    j1.ataca();

    std::cout
        << j1.Decirnombre() << " tiene "
        << j1.Decirvida() << " de vida" << std::endl;

    j1.atacan(4);
    return 0;
}
