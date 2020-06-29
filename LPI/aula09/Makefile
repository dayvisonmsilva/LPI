GCC = g++
GCC_FLAGS = -I include -std=c++11 -Wall -O2
PROGRAMA = diary

App.o: src/App.cpp include/App.h
    $(GCC) $(GCC_FLAGS) -c src/App.cpp

Date.o: src/Date.cpp include/Date.h
    $(GCC) $(GCC_FLAGS) -c src/Date.cpp

Diary.o: src/Diary.cpp include/Diary.h
    $(GCC) $(GCC_FLAGS) -c src/Diary.cpp

Getdatatime.o: src/Getdatatime.cpp include/Getdatatime.h
    $(GCC) $(GCC_FLAGS) -c src/Getdatatime.cpp

main.o: src/main.cpp
    $(GCC) $(GCC_FLAGS) -c src/main.cpp

Time.o: src/Time.cpp include/Time.h
    $(GCC) $(GCC_FLAGS) -c src/Time.cpp

$(PROGRAMA): App.o Date.o Diary.o Getdatatime.o main.o Time.o
    $(GCC) $(GCC_FLAGS) -o $(PROGRAMA) App.o Date.o Diary.o Getdatatime.o main.o Time.o
