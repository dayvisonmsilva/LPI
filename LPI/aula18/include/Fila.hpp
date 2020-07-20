#ifndef FILA_HPP
#define FILA_HPP

#include <iostream>

using namespace std;

template <class T>
class Fila {
    private:
    int size;
    int top;
    T* clients;

    public:
    Fila(int s){
        this->size = s;
        this->top = -1;
        this->clients = new T[size];
    }

    void push(T client){
        if(top == (size -1)){
            cout << "Fila cheia" << endl;
        }else{
            this->clients[++top] = client;
        }
    }
    void pop(){
        if (!this->isEmpty()) {
            for (int i = 0; i<size-1; ++i) {
                clients[i] = clients[i+1];
            }
            top--;
        } else {
            cout << "Fila vazia" << endl;
        }   
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
    T back(){
        return this->clients[top];  
    }
    T front(){
        return this->clients[0];
    }
};
#endif // FILA_HPP
