#ifndef CLIENTEPF_HPP
#define CLIENTEPF_HPP

#include <string>
#include "Cliente.hpp"

using namespace std;

class ClientePF : public Cliente {
    private:
        string cpf;

    public:
        static int quantidadeClientes;

        ClientePF(string nome, string cpf);
        ClientePF();
        ~ClientePF();

        void setCpf(string cpf);
        string getCpf(); 
        
};
#endif // !CLIENTEPF_HPP
