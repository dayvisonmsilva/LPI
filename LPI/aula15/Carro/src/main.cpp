#include <iostream>
#include "../include/Carro.hpp"

using namespace std;

int main(){
    Carro c("preto");
    c.tipo = "Sedan";
    c.numPortas = 4;
    c.placa = "XYZ-0102";

    Carro c2("vermelho");
    c2.tipo = "Civic";
    c2.numPortas = 2;
    c2.placa = "ABC-0304";

    cout << "Tipo do carro: " << c.tipo << endl;
    cout << "Quantidade de portas: " << c.numPortas << endl;
    cout << "Placa do carro: " << c.placa << endl;
    cout << "A cor do carro é: " << c.cor << endl;
    c.ligaCarro();
    c.acelera(50);
    cout << "A velocidade atual é: " << c.velocidade << " KM/H" << endl;
    c.freia (20);
    cout << "A velocidade atual é: " << c.velocidade << " KM/H\n" << endl;

    cout << "Tipo do carro: " << c2.tipo << endl;
    cout << "Quantidade de portas: " << c2.numPortas << endl;
    cout << "Placa do carro: " << c2.placa << endl;
    cout << "A cor do carro é: " << c2.cor << "\n" << endl;

    cout << "QUANTIDADE DE CARROS: " << c.quantidadeCarros << endl;

    return 0;
}