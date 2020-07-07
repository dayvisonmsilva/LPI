#include <iostream>

#include "../include/Conta.hpp"

int main(int argc, char* argv[]) {
    Agencia ag(02, "Bradesco");

    Cliente cl1("Maria", "000.000.111-11");
    Cliente cl2("Rodrigo", "000.000.222-22");

    Conta c1(5657, 100, cl1, ag);
    Conta c2(4647, 40, cl2, ag);

    std::cout << "CONTA 1: \n" << "titular: " << c1.titular.nome << "\n" 
    << "cpf:" << c1.titular.cpf << "\n" << "saldo: " << c1.saldo << "\n" << std::endl;
    std::cout << "CONTA 2: \n" << "titular: " << c2.titular.nome << "\n" 
    << "cpf:" << c2.titular.cpf << "\n" << "saldo: " << c2.saldo << "\n" << std::endl;

    c2.deposita(12);
    c1.transfere(15, c2);
    c2.saca(2);

    std::cout << "CONTA 1: \n" << "titular: " << c1.titular.nome << "\n" 
    << "cpf:" << c1.titular.cpf << "\n" << "saldo: " << c1.saldo << "\n" << std::endl;
    std::cout << "CONTA 2: \n" << "titular: " << c2.titular.nome << "\n" 
    << "cpf:" << c2.titular.cpf << "\n" << "saldo: " << c2.saldo << "\n" << std::endl;
    return 0;
}