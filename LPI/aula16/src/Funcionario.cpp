#include "../include/Funcionario.hpp"

Funcionario::Funcionario() {
    
}

Funcionario::~Funcionario() {

}

void Funcionario::setNome(string nome) {
    this->nome = nome;
}

string Funcionario::getNome(){
    return this->nome;
}

void Funcionario::setDataAdmissao(string dataAdmissao) {
    this->dataAdmissao = dataAdmissao;
}

string Funcionario::getDataAdmissao() {
    return this->dataAdmissao;
}

void Funcionario::setDepartamento(string departamento) {
    this->departamento = departamento;
}

string Funcionario::getDepartamento() {
    return this->departamento;
}

void Funcionario::setSalario(double salario) {
    this->salario = salario;
}

double Funcionario::getSalario() {
    return this->salario;
}