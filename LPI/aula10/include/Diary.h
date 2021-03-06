#ifndef W5N_DIARY_H
#define W5N_DIARY_H

#include "Message.h"

#include <string>

struct Diary
{
    Diary(const std::string& filename);
    ~Diary();

    std::string filename;
    Message* messages;
    size_t messages_size;
    size_t messages_capacity;
    size_t existing_messages;

    void add(const std::string& message);
    void add(const Message& message);
    void write();
    void increase_array();
    Message* search(const std::string& what);
};
#endif
