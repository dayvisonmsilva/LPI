#include "Date.h"
#include "Diary.h"

#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char* argv[])
{
    Date d;
    d.set_from_string("26/06/2020");
    std::cout << "OK" << std::endl;
    std::cout << d.to_string() << std::endl;
    std::string date = "25/06/2020 asdf asdf asdf";
    Date d;

    std::stringstream stream(date);
    char discard;

    stream >> d.day;
    stream >> discard; 
    stream >> d.month;
    stream >> discard;
    stream >> d.year;

    std::cout << d.day << std::endl;
    std::cout << d.month << std::endl;
    std::cout << d.year << std::endl;

    return 0;
}
