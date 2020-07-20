#include "../include/Conta.hpp"

int Conta::quantidadeContas = 0;

Conta::Conta(int numero, double saldo, ClientePF titular, Agencia agencia) 
: numero(numero), saldo(saldo), titular(titular), agencia(agencia)  {
    this->quantidadeContas += 1;
}

Conta::Conta() {
    this->numero = 0;
    this->saldo = 0;
    this->quantidadeContas += 1;
}

Conta::~Conta() {
    
}

void Conta::saca(double valor) {
    if (valor <= this->saldo)
        this->saldo -= valor;
    else {
        std::cout << "Operação inválida. Valor inferior ao saldo." << std::endl;
    }   
}

void Conta::deposita(double valor){ 
    this->saldo += valor;
}

void Conta::transfere(double valor, Conta &c){ 
    if (valor <= this->saldo) {
        this->saldo -= valor;
        c.deposita(valor);
    } else {
        std::cout << "Operação inválida. Valor inferior ao saldo." << std::endl;
    }    
}