#include <iostream>
#include <string>
#include <fstream>

void show_usage(const std::string &prog_name);

int main(int argc, char *argv[]) {
  std::ofstream arquivo_saida{"mensagem.txt", std::ios::app};

  if (argc == 1) {
    show_usage(argv[0]);
    return 1;
  }

  std::string action = argv[1];

  if (action == "add") {
    show_usage(argv[0]);
    return 1;
  }
 
  std::string mensagem;
  if (argc == 2){
    std::cout << "Digite uma mensagem: " << std::endl;
    std::getline(std::cin, mensagem);
  }

  if (argc == 3) {
    mensagem = argv[2];
  }

  if (!arquivo_saida.is_open()) {
    std::cerr << "O arquivo não pode ser criado." << std::endl;
    return 1;
  }
  
  arquivo_saida << mensagem << "\n";
  arquivo_saida.close();

  std::cout << "Mensagem Adicionada" << std::endl;

  return 0;
}

void show_usage(const std::string &prog_name) {
  std::cout << "Uso: " << prog_name << " add <mensagem>" << std::endl;
}
