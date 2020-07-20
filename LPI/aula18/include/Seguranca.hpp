#ifndef SEGURANCA_HPP
#define SEGURANCA_HPP

#include <string>
#include "Funcionario.hpp"

using namespace std;

class Seguranca : public Funcionario{
    private:
        string setor;

    public:
        Seguranca(string nome, double salario, string setor);
        Seguranca();

        void setSetor(string setor);
        string getSetor();
        
};
#endif // !SEGURANCA_HPP

