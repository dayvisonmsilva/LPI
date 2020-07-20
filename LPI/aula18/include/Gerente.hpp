#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <string>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario{
    private:
        string setor;

    public:
        Gerente(string nome, double salario, string setor);
        Gerente();

        void setSetor(string setor);
        string getSetor();

};
#endif // !GERENTE_HPP


