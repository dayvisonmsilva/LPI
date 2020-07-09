#include <iostream>

#include "../include/Cliente.hpp"

int Cliente::quantidadeClientes = 0;

/*Cliente::Cliente(std::string nome, std::string cpf) {
    this->nome = nome;
    this->cpf = cpf;
    this->quantidadeClientes += 1;
}*/

Cliente::Cliente(std::string nome, std::string cpf) : nome(nome), cpf(cpf) {
    this->quantidadeClientes += 1;
}

Cliente::Cliente() {
    this->quantidadeClientes += 1;
}

Cliente::~Cliente() {

}

