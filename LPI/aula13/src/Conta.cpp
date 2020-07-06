#include "../include/Conta.hpp"

Conta::Conta() : numero(0), saldo(0), titular("") {

}

Conta::Conta(int numero, double saldo, std::string titular) : numero(numero), saldo(saldo), titular(titular) {

}

void Conta::saca(double valor) {
    this->saldo -= valor;
}

void Conta::deposita(double valor){ 
    this->saldo += valor;
}

void Conta::transfere(double valor, Conta &c){ 
    this->saldo -= valor;
    c.deposita(valor);
}