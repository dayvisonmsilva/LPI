#include <string>

#include "Cliente.hpp"
#include "Agencia.hpp"

class Conta {
    public:
        int numero;
        double saldo;
        Cliente titular;
        Agencia agencia;

        Conta();
        Conta(int numero, double saldo, Cliente titular, Agencia agencia);

        void saca(double valor);
        void deposita(double valor);
        void transfere(double valor, Conta &c);
};