#include <iostream>
#include <string>
#include <fstream>

void show_usage(const std::string &prog_name);
void list();

int main(int argc, char *argv[]) {

  std::cout << "PARTE 0: " << std::endl;
  if (argc == 1) {
    show_usage(argv[0]);
    return 1;
  }

  std::string action = argv[1];
  std::cout << "PARTE 1: " << std::endl;
  std::cout << action << std::endl;

  if (action == "add") {
    show_usage(argv[0]);
    return 1;
  }

  std::cout << "PARTE 2: " << std::endl;
  std::string mensagem;
  if (argc == 2){
    std::cout << "Digite uma mensagem: " << std::endl;
    std::getline(std::cin, mensagem);
  }

  if (argc == 3) {
    mensagem = argv[2];
  }
  
  std::ofstream arquivo_saida("mensagem.txt", std::ios::app);

  if (!arquivo_saida.is_open()) {
    std::cerr << "O arquivo não pode ser criado." << std::endl;
    return 1;
  }
  
  arquivo_saida << mensagem << "\n";
  arquivo_saida.close();

  std::cout << "Mensagem Adicionada" << std::endl;

  list();

  return 0;
}

void show_usage(const std::string &prog_name) {
  std::cout << "Uso: " << prog_name << " add <mensagem>" << std::endl;
}

void list() {
  std::ifstream arquivo_entrada("mensagem.txt");

  std::string message;

  int line_number = 0;

  while (!arquivo_entrada.eof()) {
    ++line_number;
    std::getline(arquivo_entrada, message);

    if (message.size() == 0) {
      continue;
    }

    std::cout << line_number << ". " << message << std::endl;
  }

  arquivo_entrada.close();
}
