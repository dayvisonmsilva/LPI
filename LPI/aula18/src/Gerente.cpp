#include "../include/Gerente.hpp"

Gerente::Gerente(string nome, double salario, string setor) : Funcionario(nome, salario), setor(setor) {

}

Gerente::Gerente(){}

void Gerente::setSetor(string setor){
    this->setor = setor;
}

string Gerente::getSetor(){
    return this->setor;
}
