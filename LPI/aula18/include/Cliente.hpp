#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente {
    private:
        string nome;
        string telefone;

    public:
        Cliente(string nome);
        Cliente();
        ~Cliente();

        void setNome(string nome);
        string getNome(); 
        void setTelefone(string telefone);
        string getTelefone();  
};
#endif // !CLIENTE_HPP