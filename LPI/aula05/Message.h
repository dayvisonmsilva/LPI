#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include "DateAndTime.h"

struct Message {
    DateAndTime date_and_time;
    std::string content;

    bool compare_dates(const Message &other_message);
};

#endif