#include <iostream>
#include "../include/Funcionario.hpp"

Funcionario::Funcionario(string nome, double salario) : nome(nome), salario(salario) {

}

Funcionario::Funcionario(){}

void Funcionario::setNome(string nome){
    this->nome = nome;
}

string Funcionario::getNome(){
    return this->nome;
}

void Funcionario::setTelefone(string telefone){
    this->telefone = telefone;   
}

string Funcionario::getTelefone(){
    return this->telefone;    
} 

void Funcionario::setSalario(double salario){
    this->salario = salario;
}
double Funcionario::getSalario(){
    return this->salario;
}