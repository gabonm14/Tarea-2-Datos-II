//
// Created by gabonm7 on 17/09/24.
//

#include "nodeLL.h"


int nodeLL::getData(){
    return data;
}

void nodeLL::setData(int valor){
    data = valor;
}

nodeLL* nodeLL::getNext(){
    return siguiente;
}

void nodeLL::setNext(nodeLL* next){
    siguiente = next;
}