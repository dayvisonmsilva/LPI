#include <iostream>

#include "../include/Agencia.hpp"

Agencia::Agencia() : numeroDaAgencia(0), nome("")  {
}

Agencia::Agencia(int numeroDaAgencia, std::string nome)
    : numeroDaAgencia(numeroDaAgencia), nome(nome) {
}