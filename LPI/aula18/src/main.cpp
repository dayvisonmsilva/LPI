#include <iostream>

#include "../include/Conta.hpp"
#include "../include/ClientePF.hpp"


int main(int argc, char* argv[]) {
    Agencia ag(02, "Bradesco");

    ClientePF cl1("Maria", "000.000.111-11");
    Conta c1(5657, 100.0, cl1, ag);
    
    ClientePF cl2("Rodrigo", "000.000.222-22");
    Conta c2(4647, 40.0, cl2, ag);

    std::cout << "QUANTIDADE DE CLIENTES: " << cl1.quantidadeClientes << std::endl;
    std::cout << "QUANTIDADE DE CONTAS: " << c1.quantidadeContas << "\n" << std::endl;

    std::cout << "CONTA 1: \n" << "titular: " << c1.titular.getNome() << "\n" 
    << "cpf:" << c1.titular.getCpf() << "\n" << "saldo: " << c1.saldo << "\n" << std::endl;
    std::cout << "CONTA 2: \n" << "titular: " << c2.titular.getNome() << "\n" 
    << "cpf:" << c2.titular.getCpf() << "\n" << "saldo: " << c2.saldo << "\n" << std::endl;

    c2.deposita(12);
    c1.transfere(15, c2);
    c2.saca(2);

    std::cout << "CONTA 1: \n" << "titular: " << c1.titular.getNome() << "\n" 
    << "cpf:" << c1.titular.getCpf() << "\n" << "saldo: " << c1.saldo << "\n" << std::endl;
    std::cout << "CONTA 2: \n" << "titular: " << c2.titular.getNome() << "\n" 
    << "cpf:" << c2.titular.getCpf() << "\n" << "saldo: " << c2.saldo << "\n" << std::endl;
    return 0;
}