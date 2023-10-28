#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Controlador.hpp>
#include <Sonic.hpp>
#include <curses.h>
#include <unistd.h>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    Ventana v;
    Controlador *control = new Controlador();
    Sonic *son = new Sonic();

    Dibujo *d1 = new Dibujo(1, 8, "titulo");
    Dibujo *d2 = new Dibujo(40, 1, "sonic");
    Dibujo *d3 = new Dibujo(1, 1, "saga");

    list<Dibujo *> dibujos;
    dibujos.push_back(d1);
    dibujos.push_back(d2);
    dibujos.push_back(d3);
    dibujos.push_back(son);

    list<Actualizable *> actualizables;
    actualizables.push_back(control);
    actualizables.push_back(son);

    bool ejecutar = true;
    while (ejecutar)
    {
        v.actualizar(actualizables);
        v.dibujar(dibujos);
    }

    return 0;
}
