#ifndef CLIENTEPJ_HPP
#define CLIENTEPJ_HPP

#include <string>
#include "Cliente.hpp"

using namespace std;

class ClientePJ : public Cliente{
    private:
        string razaoSocial;
        string CNPJ;

    public:
        ClientePJ(string nome, string razaoSocial, string cnpj);
        ClientePJ();
        ~ClientePJ();

        void setRazaoSocial(string razaoSocial);
        string getRazaoSocial();
        void setCNPJ(string cnpj);
        string getCNPJ();
};
#endif // !CLIENTEPJ_HPP

