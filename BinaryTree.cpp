//
// Created by gabonm7 on 17/09/24.
//

#include "BinaryTree.h"

void BinaryTree::insert(int valor) {
    root= insert(root, valor);
}

nodeBT* BinaryTree::insert(nodeBT* node, int valor) {
    if (!node) {
        return new nodeBT(valor);
    }

    if (valor < node->getData()) {
        node->setIzq(insert(node->getIzq(), valor));
    } else if (valor > node->getData()) {
        node->setDer(insert(node->getDer(), valor));
    }

    return node;
}

bool BinaryTree::search(nodeBT* node, int valor) const{
    if (!node) {
        return false;
    }

    if (valor == node->getData()) {
        return true;
    } else if (valor < node->getData()) {
        return search(node->getIzq(), valor);
    } else {
        return search(node->getDer(), valor);
    }

}

void BinaryTree::deleteTree(nodeBT* node){
    if (!node) {
        return;
    }

    deleteTree(node->getIzq());
    deleteTree(node->getDer());
    delete node;
}

nodeBT* BinaryTree::getRoot() const {

    return root;
}