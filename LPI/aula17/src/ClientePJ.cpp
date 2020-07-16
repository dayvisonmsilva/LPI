#include "ClientePJ.hpp"

ClientePJ::ClientePJ(string razaoSocial, string cnpj) : razaoSocial(razaoSocial), CNPJ(cnpj) {

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