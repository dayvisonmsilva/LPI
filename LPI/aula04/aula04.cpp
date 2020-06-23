#include <iostream>
#include <string>
#include <fstream>

void show_usage(const std::string &prog_name);
int add(int argc, const std::string &mensagem_adicionada);
void list();

int main(int argc, char *argv[]) {
  std::cout << " --------------------- DIÁRIO --------------------" << std::endl;
  if (argc == 1) {
    show_usage(argv[0]);
    return 1;
  }

  std::string action = argv[1];
  if (action != "add" && action != "list") {
    show_usage(argv[0]);
    return 1;
  }

  if (action == "add") {
    add(argc, argv[2]);
  } 
  
  if (action == "list") {
    list();
  }
  
  return 0;
}

void show_usage(const std::string &prog_name) {
  std::cout << " --------------- LISTA DE COMANDOS ---------------" << std::endl;
  std::cout << "Para utilizar o programa digite " << prog_name << " e um dos seguintes comandos: " << std::endl;
  std::cout << "1. add <mensagem>:  adiciona a <mensagem>;" << std::endl;
  std::cout << "2. list: lista as mensagems já cadastradas;"  << std::endl;
}

int add(int argc, const std::string &mensagem_adicionada) {
  std::string mensagem;
  if (argc == 2){
    std::cout << "Digite uma mensagem: " << std::endl;
    std::getline(std::cin, mensagem);
  }

  if (argc == 3) {
    mensagem = mensagem_adicionada;
  }
  
  std::ofstream arquivo_saida("mensagem.txt", std::ios::app);

  if (!arquivo_saida.is_open()) {
    std::cerr << "O arquivo não pode ser criado." << std::endl;
    return 1;
  }
  
  arquivo_saida << mensagem << "\n";
  arquivo_saida.close();

  std::cout << "Mensagem Adicionada" << std::endl;
}

void list() {
  std::cout << "MENSAGENS: " << std::endl;
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
