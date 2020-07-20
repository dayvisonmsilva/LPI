#include "../include/ClientePF.hpp"

int ClientePF::quantidadeClientes = 0;

ClientePF::ClientePF(string nome, string cpf) : Cliente(nome), cpf(cpf) {
    this->quantidadeClientes += 1;
}

ClientePF::ClientePF(){
    this->quantidadeClientes += 1;
}

ClientePF::~ClientePF(){}

void ClientePF::setCpf(string cpf){
    this->cpf = cpf;
}

string ClientePF::getCpf(){
    return this->cpf;
} 