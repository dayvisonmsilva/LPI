#include <iostream>

#include "../include/Fila.hpp"
#include "../include/Cliente.hpp"
#include "../include/ClientePJ.hpp"

int main(int argc, char* argv[]) {
    Cliente cliente1("Maria", "000.000.111-11");
    Cliente cliente2("Arthur", "000.000.222-22");
    Cliente cliente3("Rodrigo", "000.000.333-33");
    ClientePJ clientePJ1("Razao 1", "51.705.842/0001-80");
    ClientePJ clientePJ2("Razao 2", "43.606.842/0001-65");

    Fila<Cliente> filaCliente(3);
    Fila<ClientePJ> filaClientePJ(3);

    if (filaCliente.isEmpty() == true || filaClientePJ.isEmpty() == true) {
        cout << "Fila vazia" << endl;
    }
    
    cout << "\nEntrando na fila." << endl;
    filaCliente.push(cliente1);
    filaCliente.push(cliente2);
    filaCliente.push(cliente3);
    filaClientePJ.push(clientePJ1);
    filaClientePJ.push(clientePJ2);

    std::cout << "Nome do primeiro cliente: " << filaCliente.front().nome << std::endl;
    std::cout << "Nome último cliente: " << filaCliente.back().nome << std::endl;

    // Retirando a primeira da fila
    filaCliente.pop();

    std::cout << "\nNome do primeiro cliente: " << filaCliente.front().nome << std::endl;
    std::cout << "Nome último cliente: " << filaCliente.back().nome << std::endl;

    return 0;
}