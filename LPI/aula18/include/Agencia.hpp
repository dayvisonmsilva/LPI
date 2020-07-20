#ifndef AGENCIA_HPP
#define AGENCIA_HPP

#include <string>

using namespace std;

class Agencia {
    private:
        int numeroAgencia;
        string nome;

    public:
        Agencia();
        Agencia(int numeroAgencia, string nome);

        void setNumeroAgencia(int numeroAgencia);
        int getNumeroAgencia();
        void setNome(string nome);
        string getNome();
};
#endif // !AGENCIA_HPP
