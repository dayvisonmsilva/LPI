#ifndef CONTA_HPP
#define CONTA_HPP

#include <iostream>
#include <string>

#include "ClientePF.hpp"
#include "Agencia.hpp"

class Conta {
    public:
        int numero;
        double saldo;
        ClientePF titular;
        Agencia agencia;
        static int quantidadeContas;

        Conta(int numero, double saldo, ClientePF titular, Agencia agencia);
        Conta();
        ~Conta();

        void saca(double valor);
        void deposita(double valor);
        void transfere(double valor, Conta &c);
};
#endif // !CONTA_HPP