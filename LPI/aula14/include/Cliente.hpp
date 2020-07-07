#include <string>

class Cliente {
    public:
        std::string nome;
        std::string cpf;

        Cliente();
        Cliente(std::string nome, std::string cpf);
};