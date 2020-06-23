#ifndef DIARY_H
#define DIARY_H

#include <string>
#include "Message.h"

struct Diary {
  Message *messages;

  int add_messages(const std::string &message);
  void list_messages();
};

#endif