#ifndef CLIENTEPJ_HPP
#define CLIENTEPJ_HPP

#include <string>

using namespace std;


class ClientePJ {
    private:
        string razaoSocial;
        string CNPJ;

    public:
        ClientePJ(string razaoSocial, string cnpj);
        ClientePJ();
        ~ClientePJ();

        void setRazaoSocial(string razaoSocial);
        string getRazaoSocial();
        void setCNPJ(string cnpj);
        string getCNPJ();
};
#endif
