#include "../include/Empresa.hpp"

Empresa::Empresa(string nome, string cnpj) {
    setNome(nome);
    setCnpj(cnpj);
}

Empresa::Empresa() {}

Empresa::~Empresa() {}

void Empresa::setNome(string nome) {
    this->nome = nome;
}

string Empresa::getNome(){
    return this->nome;
}

void Empresa::setCnpj(string cnpj) {
    this->cnpj = cnpj;
}

string Empresa::getCnpj() {
    return this->cnpj;
}

void Empresa::setFuncionario(Funcionario funcionario) {
  this->funcionarios.push_back(funcionario);
}

vector<Funcionario> Empresa::getFuncionario() {
  return this->funcionarios;
}

void Empresa::novoSalario(string salario) {
    for (size_t i = 0; i < this->funcionarios.size(); i++) {
        if (funcionarios[i].getDepartamento() == salario) {
            double salarioNovo;
            salarioNovo = funcionarios[i].getSalario() * 1.1;
            funcionarios[i].setSalario(salarioNovo);
        } 
    }
}