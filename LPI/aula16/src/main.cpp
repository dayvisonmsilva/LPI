#include "../include/Empresa.hpp"
#include "../include/Funcionario.hpp"

#include <iostream>

int main(int argc, char const* argv[]) {
    int qtdFuncionarios = 0;

    Empresa empresa("Samsung", "51.705.842/0001-80");

    std::cout << "Quantos funcionários deseja adicionar?" << std::endl;
    std::cin >> qtdFuncionarios;

    std::cout << "\n----------ADICIONAR FUNCIONÁRIOS----------" << std::endl;
    for (int i = 0; i < qtdFuncionarios; i++) {
        Funcionario funcionario;
        string nome;
        string departamento;
        double salario;

        std::cout <<"\nFUNCIONÁRIO " << (i+1) << std::endl;
        std::cout << "Digite o nome do funcionário:" << std::endl;
        std::cin.ignore();
        std::getline(std::cin, nome);

        std::cout << "Digite o departamento do funcionário:" << std::endl;
        std::getline(std::cin, departamento);

        std::cout << "Digite o salário do funcionário:" << std::endl;
        std::cin >> salario;

        funcionario.setNome(nome);
        funcionario.setDepartamento(departamento);
        funcionario.setDataAdmissao("13/07/2020");
        funcionario.setSalario(salario);

        empresa.setFuncionario(funcionario);
    }
    
    string d;
    std::cout << "\nDigite o nome do departamento no qual os funcionários ganharão 10% de aumento no salário" << std::endl;
    std::cin.ignore();
    std::getline(std::cin, d);

    empresa.novoSalario(d);

    std::cout << "\n";
    for (Funcionario f : empresa.getFuncionario()) {
        std::cout << "Nome: " << f.getNome() << std::endl;
        std::cout << "Departamento: " << f.getDepartamento() << std::endl;
        std::cout << "Salário: " << f.getSalario() << std::endl;
        std::cout << "\n";
    }
    return 0;
}
