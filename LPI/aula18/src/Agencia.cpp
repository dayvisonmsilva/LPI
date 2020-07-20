#include <iostream>

#include "../include/Agencia.hpp"

Agencia::Agencia() : numeroAgencia(0), nome("")  {
}

Agencia::Agencia(int numeroDaAgencia, string nome)
    : numeroAgencia(numeroDaAgencia), nome(nome) {
}

void Agencia::setNome(string nome) {
    this->nome = nome;
}

string Agencia::getNome(){
    return this->nome;
}

void Agencia::setNumeroAgencia(int numeroAgencia){
    this->numeroAgencia = numeroAgencia;
}

int Agencia::getNumeroAgencia(){
    return this->numeroAgencia;
}

