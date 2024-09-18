//
// Created by gabonm7 on 17/09/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H



#include "nodeLL.h"
class LinkedList {
private:
    nodeLL* cabeza;
    int index;

public:
    LinkedList() : cabeza(nullptr), index(0) {}
    ~LinkedList();
    int getPos(int position);
    void setPos(int position, int value);
    void append(int value);
    void deleteNode(int posicion);

};
#include "LinkedList.cpp"
#endif //LINKEDLIST_H
