#include "Diary.h"
#include "../include/Getdatatime.h"

#include <fstream>
#include <iostream>
#include <sstream>

Diary::Diary(const std::string& name) : filename(name), existing_messages(0) {
    std::ifstream arquivo_entrada(filename);
    std::string message;
    std::string date;
    std::string time;
    Message msg;
    
    char discard;
    int line_number = 0;

    if (not arquivo_entrada or not arquivo_entrada.is_open()) {
        std::cerr << "O arquivo não pode ser criado." << std::endl;
        return;
    }

    while (!arquivo_entrada.eof()) {
        ++line_number;
        std::getline(arquivo_entrada, message);

        if (message.size() == 0) {
            continue;
        }

        std::stringstream stream(message);
        stream >> discard;
        if (discard == '#') {
            stream >> date;
            
        } else {
            if (discard == '-') { 
                stream >> time;
                msg.time.set_from_string(time);
            } 

            msg.date.set_from_string(date);
            msg.content = message.substr(11, 30);
            existing_messages++;
            add(msg);
        }

        //std::cout << "Teste: " << existing_messages << std::endl; 
    }
    arquivo_entrada.close();
}

Diary::~Diary() {}

// gravar as mensagens no array
void Diary::add(const std::string& message) {
    Message m;
    m.content = message;
    m.date.set_from_string(get_current_date());
    m.time.set_from_string(get_current_time());

    messages.push_back(m);
}

void Diary::add(const Message& message) {
    messages.push_back(message);
}

// gravar as mensagens no disco
void Diary::write() {
    std::ofstream arquivo_saida(filename, std::ios::app);
    std::string current_date = messages[messages.size()-1].date.to_string();

    if (!arquivo_saida.is_open()) {
        std::cerr << "O arquivo não pode ser criado." << std::endl;
        return;
    }

    if (messages[existing_messages-1].date.to_string() != current_date && existing_messages != 0) {
        arquivo_saida << "\n";
        arquivo_saida << "# " << current_date << std::endl;    
    } else if (existing_messages == 0) {
        arquivo_saida << "# " << current_date << std::endl; 
    }
    
    for (size_t i = existing_messages; i < messages.size(); i++) { 
        if (messages[i].date.to_string() == current_date) {
            arquivo_saida << "- " << messages[i].time.to_string() << " " << messages[i].content << std::endl;    
        } else {
            arquivo_saida << "\n"; 
            arquivo_saida << "# " << messages[i].date.to_string() << std::endl;
            arquivo_saida << "- " << messages[i].time.to_string() << " " << messages[i].content << std::endl;
        }
    }   
    arquivo_saida.close();
}

std::vector<Message *> Diary::search(const std::string& what) {
  std::vector<Message *> contents;

  for (size_t i = 0; i < messages.size(); ++i) {
    if (messages[i].content.find(what) != std::string::npos) {
      contents.push_back(&messages[i]);
    }
  }
  return contents;
}