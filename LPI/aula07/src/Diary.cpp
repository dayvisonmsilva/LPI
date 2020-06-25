#include "../include/Diary.h"
#include "../include/Message.h"

#include <fstream>
#include <iostream>

Diary::Diary(const std::string &filename) : filename(filename), messages_capacity(10), messages_size(0), messages(nullptr) {
    messages = new Message[messages_capacity];
}

// adicionar mensagem no array de mensagens
void Diary::add(const std::string& message) {
    Message mensagem;

    mensagem.content = message;
    messages[messages_size] = mensagem;
    messages_size++;
}

// gravar as mensagens no disco
void Diary::write() {
    /*std::ofstream arquivo_saida(filename, std::ios::app);

    if (!arquivo_saida.is_open()) {
        std::cerr << "O arquivo não pode ser criado." << std::endl;
    }
    
    arquivo_saida << "- " << get_current_time() << " " << mensagem << "\n";
    arquivo_saida.close();*/
}
