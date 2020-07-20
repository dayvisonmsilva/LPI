GCC := g++
GCC_FLAGS := -I include -std=c++11 -Wall
PROGRAM := banco

all: $(PROGRAM)

$(PROGRAM): main.o Conta.o Cliente.o Agencia.o ClientePJ.o ClientePF.o Funcionario.o Gerente.o Caixa.o Seguranca.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAM) main.o Conta.o Cliente.o Agencia.o ClientePJ.o ClientePF.o Funcionario.o Gerente.o Caixa.o Seguranca.o

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

ClientePF.o: src/ClientePF.cpp include/ClientePF.hpp
	$(GCC) $(GCC_FLAGS) -c src/ClientePF.cpp

Funcionario.o: src/Funcionario.cpp include/Funcionario.hpp
	$(GCC) $(FLAGS) -c src/Funcionario.cpp

Gerente.o: src/Gerente.cpp include/Gerente.hpp
	$(GCC) $(FLAGS) -c src/Gerente.cpp

Caixa.o: src/Caixa.cpp include/Caixa.hpp
	$(GCC) $(FLAGS) -c src/Caixa.cpp

Seguranca.o: src/Seguranca.cpp include/Seguranca.hpp
	$(GCC) $(FLAGS) -c src/Seguranca.cpp

clean:
	rm -f *.o
	rm $(PROGRAM)

.PHONY: all clean
