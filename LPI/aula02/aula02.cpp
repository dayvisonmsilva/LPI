#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[]) {
  std::ofstream arquivo_saida{"mensagem.txt", std::ios::app};

  if (argc <= 1) {
    std::cout << "Uso: " << argv[0] << " add <mensagem>";
    return -1;
  }
 
  if (argc == 2){
    if (std::string(argv[1]) == "add")  {
      std::string mensagem;
       
      std::cout << "Digite uma mensagem: " << std::endl;
      std::getline(std::cin, mensagem);
      std::cout << "Mensagem adicionada: " << mensagem << std::endl;

      arquivo_saida << message << std::endl;
    }
  }

  if (argc == 3) {
    if (std::string(argv[1]) == "add")  {
      std::cout << "Mensagem adicionada: " << argv[2];
      arquivo_saida << argv[2] << std::endl;
    }
  }
  
  return 0;
}
