#include <iostream>
#include "../include/Conta.hpp"

int main(int argc, char* argv[]) {
    Conta c1(5657, 100, "Maria");
    Conta c2(4647, 40, "Rodrigo");

    std::cout << "CONTA 1: \n" << "titular: " << c1.titular << "\n" << "saldo: " << c1.saldo << "\n" << std::endl;
    std::cout << "CONTA 2: \n" << "titular: " << c2.titular << "\n" << "saldo: " << c2.saldo << "\n" << std::endl;

    c2.deposita(12);
    c1.transfere(15, c2);
    c2.saca(2);

    std::cout << "CONTA 1: \n" << "titular: " << c1.titular << "\n" << "saldo: " << c1.saldo << "\n" << std::endl;
    std::cout << "CONTA 2: \n" << "titular: " << c2.titular << "\n" << "saldo: " << c2.saldo << "\n" << std::endl;
    return 0;
}