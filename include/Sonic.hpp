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
    void personaje()
    {
        std::cout << "Puede:" << std::endl;
        std::cout << "Correr" << std::endl;
        std::cout << "Saltar" << std::endl;
        std::cout << "Rodar" << std::endl;
        std::cout << "Atacar" << std::endl;
        std::cout << "Disparar" << std::endl;
        std::cout << "Volar" << std::endl;
    }

    void enemigo()
    {
        std::cout << "Puede:" << std::endl;
        std::cout << "Atacar" << std::endl;
        std::cout << "Disparar" << std::endl;
        std::cout << "Tiene; Proyectil" << std::endl;
    }
    void escenario()
    {
        std::cout << "Tiene:" << std::endl;
        std::cout << "Dias" << std::endl;
        std::cout << "Noches" << std::endl;
        std::cout << "Enemigo:" << std::endl;
        std::cout << "Flor" << std::endl;
        std::cout << "Tiempo" << std::endl;
        std::cout << "Nivel:" << std::endl;
        std::cout << "Resorte" << std::endl;
        std::cout << "Puente" << std::endl;
    }
    void nivel()
    {
        std::cout << "Puede:" << std::endl;
        std::cout << "Iniciar" << std::endl;
        std::cout << "Finalizar" << std::endl;
    }
    void tiempo()
    {
        std::cout << "Usa:" << std::endl;
        std::cout << "Conatdor" << std::endl;
    }
    void otroselementos()
    {
        std::cout << "Resorte puede: Flexionar" << std::endl;
        std::cout << "Puente es: Estatico" << std::endl;
        std::cout << "Flor es: Estatico" << std::endl;
        std::cout << "Aro puede: Flotar" << std::endl;
    }
    void sonic()
    {
        std::cout << "Es un personaje" << std::endl;
        std::cout << "Puede correr" << std::endl;
        std::cout << "Puede saltar" << std::endl;
        std::cout << "Puede atacar" << std::endl;
        std::cout << "Puede rodar" << std::endl;
        std::cout << "Tiene vida" << std::endl;
        std::cout << "Usa un resorte" << std::endl;
        std::cout << "Usa un puente" << std::endl;
        std::cout << "Esta en un escenario" << std::endl;
        std::cout << "Esta en un nivel" << std::endl;
        std::cout << "Usa un enemigo" << std::endl;
    }
};
