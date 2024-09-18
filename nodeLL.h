//
// Created by gabonm7 on 17/09/24.
//

#ifndef NODELL_H
#define NODELL_H


class nodeLL {
private:
    int data;
    nodeLL* siguiente;
public:
    nodeLL(int valor) : data(valor), siguiente(nullptr) {}
    int getData();
    void setData(int valor);
    nodeLL* getNext();
    void setNext(nodeLL* next);
};
#include "nodeLL.cpp"
#endif //nodeLL_H