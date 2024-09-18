//
// Created by gabonm7 on 17/09/24.
//

#ifndef NODEBT_H
#define NODEBT_H



class nodeBT {
private:
    int data;
    nodeBT* izquierda;
    nodeBT* derecha;
public:
    nodeBT(int val) : data(val), izquierda(nullptr), derecha(nullptr) {}
    int getData();
    void setData(int valor);
    nodeBT* getIzq();
    nodeBT* getDer();
    void setIzq(nodeBT* next);
    void setDer(nodeBT* next);
};

#include "nodeBT.cpp"
#endif //NODEBT_H
