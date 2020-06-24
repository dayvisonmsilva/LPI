#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

void show_usage(const std::string &prog_name);
int add(int argc, const std::string &mensagem_adicionada);
void list();
int verifca_data(int argc, const std::string &mensagem_adicionada);

//FUNÇÕES DE DATA E HORA
std::string format_current_date(const std::string& format);
std::string get_current_date();
std::string get_current_time();


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
    if (argc < 3) {
      return verifca_data(argc, " ");
    } else {
      return verifca_data(argc, argv[2]);
    }
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
  std::cout << "2. list: lista as mensagens já cadastradas;"  << std::endl;
}

int add(int argc, const std::string &mensagem_adicionada) {
  int retorno = 0;
  std::string mensagem;

  if (argc == 2){
    std::cout << "Digite uma mensagem: " << std::endl;
    std::getline(std::cin, mensagem);
  }

  if (argc == 3) {
    mensagem = mensagem_adicionada;
  }
  
  std::ofstream arquivo_saida("mensagem.md", std::ios::app);
  std::ofstream arquivo_saida02("mensagens.md", std::ios::app);

  if (!arquivo_saida.is_open()) {
    std::cerr << "O arquivo não pode ser criado." << std::endl;
    retorno = 1;
    return retorno;
  }

  if (!arquivo_saida02.is_open()) {
    std::cerr << "O arquivo não pode ser criado." << std::endl;
    retorno = 1;
    return retorno;
  }

  arquivo_saida << "- " << get_current_time() << " " << mensagem << "\n";
  arquivo_saida.close();

  arquivo_saida02 << "- " << get_current_time() << " " << mensagem << "\n";
  arquivo_saida02.close();

  std::cout << "Mensagem Adicionada" << std::endl;
}

void list() {
  std::cout << "MENSAGENS: " << std::endl;
  std::ifstream arquivo_entrada("mensagens.md");

  std::string message;

  int line_number = 0;

  while (!arquivo_entrada.eof()) {
    ++line_number;
    std::getline(arquivo_entrada, message);

    if (message.size() == 0) {
      continue;
    }

    std::cout << message << std::endl;
  }

  arquivo_entrada.close();
}

std::string format_current_date(const std::string& format) {
  std::time_t time = std::time(nullptr);
  char result[1024];

  std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));
  
  return std::string(result);
}

std::string get_current_date() {
  return format_current_date("%d/%m/%Y");
}

std::string get_current_time() {
  return format_current_date("%H:%M:%S");
}

int verifca_data(int argc, const std::string &mensagem_adicionada) {
  std::ifstream arquivo_entrada("mensagem.md");
  std::string message;
  int achou = 0;
  int retorno_verifica_data = 0;

  int line_number = 0;

  while (!arquivo_entrada.eof()) {

    ++line_number;
    std::getline(arquivo_entrada, message);

    //NOVO
    if (message == "# "+get_current_date()) {
      achou = 1;
      break;
    } 

    if (message.size() == 0) {
      continue;
    }
  }
  std::ofstream arquivo_saida("mensagem.md", std::ios::app);

  if (!arquivo_saida.is_open()) {
    std::cerr << "O arquivo não pode ser criado." << std::endl;
    return 1;
  }

  if (achou == 1) {
    retorno_verifica_data = add(argc, mensagem_adicionada);
  } else {
    arquivo_saida << "\n";
    arquivo_saida << "# " << get_current_date() << "\n";
    arquivo_saida.close();

    retorno_verifica_data = add(argc, mensagem_adicionada);
  }

  arquivo_entrada.close();

  return retorno_verifica_data;
}
