#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  if (std::string(argv[1]) == "add") {
    if (argc == 2){
      std::string mensagem;
       
      std::cout << "Digite uma mensagem: ";
      std::getline(std::cin, mensagem);
      std::cout << mensagem;
    }

    if (argc == 3) {
      std::cout << "Mensagem adicionada: " << argv[2];
    }

  } else {

    if (argc <= 1){
      std::cout << "Uso: " << argv[0] << " add <mensagem>";
      return -1;
    }

  } 

  return 0;
}
