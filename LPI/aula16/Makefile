GCC := g++
GCC_FLAGS := -I include -std=c++11 -Wall
PROGRAM := empresa

all: $(PROGRAM)

$(PROGRAM): main.o Funcionario.o Empresa.o 
	$(GCC) $(GCC_FLAGS) -o $(PROGRAM) main.o Funcionario.o Empresa.o 

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

Funcionario.o: src/Funcionario.cpp include/Funcionario.hpp
	$(GCC) $(GCC_FLAGS) -c src/Funcionario.cpp

Empresa.o: src/Empresa.cpp include/Empresa.hpp
	$(GCC) $(GCC_FLAGS) -c src/Empresa.cpp

clean:
	rm -f *.o
	rm $(PROGRAM)

.PHONY: all clean