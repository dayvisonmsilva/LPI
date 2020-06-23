#ifndef DATEANDTIME_H
#define DATEANDTIME_H

#include <string>
#include <ctime>

struct DateAndTime {
    std::string format_current_date(const std::string &format);
    std::string get_current_date();
    std::string get_current_time();
};

#endif