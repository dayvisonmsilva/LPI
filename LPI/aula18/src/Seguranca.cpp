#include "../include/Seguranca.hpp"

Seguranca::Seguranca(string nome, double salario, string setor) : Funcionario(nome, salario), setor(setor) { 

}

Seguranca::Seguranca(){}

void Seguranca::setSetor(string setor){
    this->setor = setor;
}

string Seguranca::getSetor(){
    return this->setor;
}