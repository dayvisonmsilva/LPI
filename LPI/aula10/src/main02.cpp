#include "App.h"

#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char* argv[]) {
    /*Diary diario("diary.md");
    diario.add("testando");
    diario.add("testando01");
    diario.add("testand002");

    Message m;
    m.content = "testando 04";

    Date d;
    std::string date = "27/06/2020";
    std::stringstream stream(date);
    char discard;

    stream >> d.day;
    stream >> discard;
    stream >> d.month;
    stream >> discard;
    stream >> d.year;

    Time t;
    std::string time = "17:12:20";
    std::stringstream stream02(time);

    stream02 >> t.hour;
    stream02 >> discard; 
    stream02 >> t.minute;
    stream02 >> discard;
    stream02 >> t.second;

    m.date = d;
    m.time = t;

    diario.messages[3] = m;
    diario.messages_size++;

    diario.write();*/
    Diary diario("diary.md");
    diario.add("testando/01");
    diario.add("testando/02");
    diario.add("testando/03");
    diario.add("testando/04");
    diario.add("testand0/05");
    diario.add("testando/06");
    diario.add("testando/07");
    diario.add("testando/08");   
    diario.add("testando/09");
    diario.add("testando/10");
    diario.add("testando/11");

    diario.write();

}
