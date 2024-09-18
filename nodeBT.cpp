//
// Created by gabonm7 on 17/09/24.
//

#include "nodeBT.h"
int nodeBT::getData(){
    return data;
}
void nodeBT::setData(int valor){
    data = valor;
}
nodeBT* nodeBT::getIzq(){
    return izquierda;
}
nodeBT* nodeBT::getDer(){
    return derecha;
}
void nodeBT::setIzq(nodeBT* izq){
    izquierda = izq;
}
void nodeBT::setDer(nodeBT* der){
    derecha = der;
}