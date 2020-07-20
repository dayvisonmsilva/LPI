#ifndef CAIXA_HPP
#define CAIXA_HPP

#include <string>
#include "Funcionario.hpp"

using namespace std;

class Caixa : public Funcionario{
    private:
        double valor;

    public:
        Caixa(string nome, double salario, double valor);
        Caixa();

        void setValor(double valor);
        double getValor();

};
#endif // !CAIXA_HPP

