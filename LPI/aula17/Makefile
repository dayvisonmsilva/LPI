GCC := g++
GCC_FLAGS := -I include -std=c++11 -Wall
PROGRAM := banco

all: $(PROGRAM)

$(PROGRAM): main.o Conta.o Cliente.o Agencia.o ClientePJ.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAM) main.o Conta.o Cliente.o Agencia.o ClientePJ.o

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

Conta.o: src/Conta.cpp include/Conta.hpp
	$(GCC) $(GCC_FLAGS) -c src/Conta.cpp

Cliente.o: src/Cliente.cpp include/Cliente.hpp
	$(GCC) $(GCC_FLAGS) -c src/Cliente.cpp

Agencia.o: src/Agencia.cpp include/Agencia.hpp
	$(GCC) $(GCC_FLAGS) -c src/Agencia.cpp

ClientePJ.o: src/ClientePJ.cpp include/ClientePJ.hpp
	$(GCC) $(GCC_FLAGS) -c src/ClientePJ.cpp

clean:
	rm -f *.o
	rm $(PROGRAM)

.PHONY: all clean
