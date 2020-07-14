#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include <string>
#include <vector>

#include "Funcionario.hpp"

using namespace std;

class Empresa {
    private:
        string nome;
        string cnpj;
        vector<Funcionario> funcionarios;

    public:
        Empresa(string nome, string cnpj);
        Empresa();
        ~Empresa();

        void setNome(string nome);
        string getNome();
        void setCnpj(string cnpj);
        string getCnpj();
        void setFuncionario(Funcionario funcionario);
        vector<Funcionario> getFuncionario();

        void novoSalario(string salario);
};
#endif


