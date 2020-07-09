GCC := g++
GCC_FLAGS := -I include -std=c++11 -Wall
PROGRAM := carro

all: $(PROGRAM)

$(PROGRAM): main.o Carro.o Motor.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAM) main.o Carro.o Motor.o

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

Carro.o: src/Carro.cpp include/Carro.hpp
	$(GCC) $(GCC_FLAGS) -c src/Carro.cpp

Motor.o: src/Motor.cpp include/Motor.hpp
	$(GCC) $(GCC_FLAGS) -c src/Motor.cpp

clean:
	rm -f *.o
	rm $(PROGRAM)

.PHONY: all clean