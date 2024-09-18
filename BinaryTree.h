//
// Created by gabonm7 on 17/09/24.
//

#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "nodeBT.h"
#include <iostream>

class BinaryTree {
private:
    nodeBT* root;
    nodeBT* insert(nodeBT* nodo, int valor);

public:
    BinaryTree() : root(nullptr) {}
    // Función auxiliar para insertar un valor en el árbol
    void insert(int valor);

    bool search(nodeBT* nodo, int valor) const;
    void deleteTree(nodeBT* nodo);
    nodeBT* getRoot() const;
};
#include "BinaryTree.cpp"
#endif //BINARYTREE_H
