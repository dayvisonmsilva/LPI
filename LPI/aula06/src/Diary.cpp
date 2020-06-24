#include <fstream>

#include "../include/Diary.h"

Diary::Diary(const std::string& fn) : filename(fn)
{
}

void Diary::add(const std::string& message)
{
    // adicionar mensagem no array de mensagens

}

void Diary::write()
{
    // gravar as mensagens no disco
    /*std::ofstream arquivo_saida(filename, std::ios::app);

    if (!arquivo_saida.is_open()) {
        std::cerr << "O arquivo não pode ser criado." << std::endl;
    }
    
    for (size_t i = 0; i < diary.messages_size; ++i) {
        const Message& message = diary.messages[i];
        std::cout << "-" << message.content << std::endl;
    }
    arquivo_saida << "- " << get_current_time() << " " << mensagem << "\n";
    arquivo_saida.close();*/
}
