#include <iostream>

#include "../include/Cliente.hpp"

Cliente::Cliente() : nome(""), cpf("") {}

Cliente::Cliente(std::string nome, std::string cpf)
    : nome(nome), cpf(cpf) {
}