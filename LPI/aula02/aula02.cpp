#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  if (argc <= 1) {
    std::cout << "Uso: " << argv[0] << " add <mensagem>";
    return -1;
  }
 
  if (argc == 2){
    if (std::string(argv[1]) == "add")  {
      std::string mensagem;
       
      std::cout << "Digite uma mensagem: ";
      std::getline(std::cin, mensagem);
      std::cout << mensagem << std::endl;
    }
  }

  if (argc == 3) {
    if (std::string(argv[1]) == "add")  {
      std::cout << "Mensagem adicionada: " << argv[2];
    }
  }
  
  return 0;
}
