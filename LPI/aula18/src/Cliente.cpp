#include <iostream>

#include "../include/Cliente.hpp"

Cliente::Cliente(string nome) : nome(nome) {
    
}

Cliente::Cliente(){}

Cliente::~Cliente(){}

void Cliente::setNome(string nome) {
    this->nome = nome;
}

string Cliente::getNome(){
    return this->nome;
}

void Cliente::setTelefone(string telefone){
    this->telefone = telefone;
}

string Cliente::getTelefone(){
    return this->telefone;
}

