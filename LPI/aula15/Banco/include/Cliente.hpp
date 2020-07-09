#include <string>

class Cliente {
    public:
        std::string nome;
        std::string cpf;
        static int quantidadeClientes;

        Cliente(std::string nome, std::string cpf);
        Cliente();
        ~Cliente();
};