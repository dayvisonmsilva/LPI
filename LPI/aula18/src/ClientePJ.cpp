#include "ClientePJ.hpp"

ClientePJ::ClientePJ(string nome, string razaoSocial, string cnpj) : 
Cliente(nome), razaoSocial(razaoSocial), CNPJ(cnpj) {

}

ClientePJ::ClientePJ() {}

ClientePJ::~ClientePJ() {}

void ClientePJ::setRazaoSocial(string razaoSocial) {
    this->razaoSocial = razaoSocial;
}

string ClientePJ::getRazaoSocial() {
    return this->razaoSocial;
}

void ClientePJ::setCNPJ(string cnpj) {
    this->CNPJ = cnpj;
}

string ClientePJ::getCNPJ() {
    return this->CNPJ;
}