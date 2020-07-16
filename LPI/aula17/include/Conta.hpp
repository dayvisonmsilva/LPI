#include <iostream>
#include <string>

#include "Cliente.hpp"
#include "Agencia.hpp"

class Conta {
    public:
        int numero;
        double saldo;
        Cliente titular;
        Agencia agencia;
        static int quantidadeContas;

        Conta(int numero, double saldo, Cliente titular, Agencia agencia);
        Conta();
        ~Conta();

        void saca(double valor);
        void deposita(double valor);
        void transfere(double valor, Conta &c);
};