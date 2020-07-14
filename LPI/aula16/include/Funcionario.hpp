#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

using namespace std;

class Funcionario {
    private:
        string nome;
        string dataAdmissao;
        string departamento;
        double salario;
        
    public:
        Funcionario();
        ~Funcionario();

        void setNome(string nome);
        string getNome();
        void setDataAdmissao(string dataAdmissao);
        string getDataAdmissao();
        void setDepartamento(string departamento);
        string getDepartamento();
        void setSalario(double salario);
        double getSalario();
};
#endif
