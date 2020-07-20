#include "../include/Caixa.hpp"

Caixa::Caixa(string nome, double salario, double valor) : Funcionario(nome, salario), valor(valor){

}

Caixa::Caixa(){}

void Caixa::setValor(double valor){
    this->valor = valor;
}

double Caixa::getValor(){
    return this->valor;
}


