#ifndef W5N_DIARY_H
#define W5N_DIARY_H

#include "Message.h"

#include <string>
#include <vector>

struct Diary
{
    Diary(const std::string& filename);
    ~Diary();

    std::string filename;
    std::vector<Message> messages;
    size_t existing_messages;

    void add(const std::string& message);
    void add(const Message& message);
    void write();
    void increase_array();
    std::vector<Message *> search(const std::string &what);
};
#endif
