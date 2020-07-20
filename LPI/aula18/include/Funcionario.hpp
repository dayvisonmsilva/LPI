#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

using namespace std;

class Funcionario{
    private:
        string nome;
        string telefone;
        double salario;
        
    public:
        Funcionario(string nome, double salario);
        Funcionario();

        void setNome(string nome);
        string getNome(); 
        void setTelefone(string telefone);
        string getTelefone();
        void setSalario(double salario);
        double getSalario(); 
};
#endif // !FUNCIONARIO_HPP
