#include <string>
#include "Motor.hpp"

using namespace std;

class Carro{
    public:
    string tipo;
    string placa;
    int numPortas;
    int velocidade;
    string cor;
    Motor motor;
    static int quantidadeCarros;

    Carro(string cor);
    Carro();
    ~Carro();

    void acelera(int velocidade);
    void freia(int velocidade);
    void ligaCarro();
};