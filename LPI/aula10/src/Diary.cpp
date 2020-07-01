#include "Diary.h"
#include "../include/Getdatatime.h"

#include <fstream>
#include <iostream>
#include <sstream>

Diary::Diary(const std::string& name) : filename(name), messages(nullptr), messages_size(0), messages_capacity(10), existing_messages(0) {
    messages = new Message[messages_capacity];

    std::ifstream arquivo_entrada(filename);
    std::string message;
    std::string date;
    std::string time;
    Date d;
    messages = new Message[messages_capacity];
    
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
                Time t;
                t.set_from_string(time);
                messages[messages_size].time = t;
            } 

            d.set_from_string(date);
            messages[messages_size].date = d;
            messages[messages_size].content = message.substr(11, 30);
            messages_size += 1;
            existing_messages += 1; 
        }
    }

    arquivo_entrada.close();
}

Diary::~Diary()
{
    delete[] messages;
}

// gravar as mensagens no array
/*void Diary::add(const std::string& message) {
    if (messages_size >= messages_capacity) {
        //std::cout << "excedeu o tamanho do Array." << std::endl;
    
        messages_capacity *= 2;

        Message* new_array = new Message[messages_capacity];
        for (size_t i = 0; i < messages_size; i++) {
            new_array[i] = messages[i];
        }
        delete[] messages;
        messages = new_array;
        Diary(filename, new_array, messages_size, messages_capacity, messages_existentes).add(message);
    }

    Message m;
    m.content = message;
    m.date.set_from_string(get_current_date());
    m.time.set_from_string(get_current_time());

    messages[messages_size] = m;
    messages_size++;
}*/

// gravar as mensagens no array
void Diary::add(const std::string& message) {
    if (messages_size >= messages_capacity) {
        std::cout << "excedeu o tamanho do Array." << std::endl;
        increase_array();
    }

    Message m;
    m.content = message;
    m.date.set_from_string(get_current_date());
    m.time.set_from_string(get_current_time());

    messages[messages_size] = m;
    messages_size++;
}

void Diary::add(const Message& message) {
  if (messages_size >= messages_capacity) {
    increase_array();
  }

  messages[messages_size] = message;
  messages_size++;
}

// gravar as mensagens no disco
void Diary::write() {
    std::ofstream arquivo_saida(filename, std::ios::app);
    int achou = 0;

    if (!arquivo_saida.is_open()) {
        std::cerr << "O arquivo não pode ser criado." << std::endl;
        return;
    }

    if (messages[existing_messages-1].date.to_string() != get_current_date() && existing_messages != 0) {
        arquivo_saida << "\n";
        arquivo_saida << "# " << get_current_date() << "\n";    
    }
    
    for (size_t i = existing_messages; i < messages_size; i++) {
        if (messages[i].date.to_string() != get_current_date()) {
            arquivo_saida << "\n";
            arquivo_saida << "# " << get_current_date() << "\n";

            arquivo_saida << "- " << messages[i].time.to_string() << " " << messages[i].content << "\n";    
        } else {
            arquivo_saida << "- " << messages[i].time.to_string() << " " << messages[i].content << "\n";
        }
    }   
    arquivo_saida.close();
}

void Diary::increase_array() {
    messages_capacity *= 2;

    Message* new_array = new Message[messages_capacity];
    for (size_t i = 0; i < messages_size; i++) {
        new_array[i] = messages[i];
    }

    delete[] messages;
    messages = new_array;
    std::cout << "Chegou aqui" << std::endl;
}

Message* Diary::search(const std::string& what) {
  for (size_t i = 0; i < this->messages_size; ++i) {
    std::string const& message_content = this->messages[i].content;

    if (message_content.find(what) != std::string::npos) {
      return this->messages + i;
    }
  }

  return nullptr;
}