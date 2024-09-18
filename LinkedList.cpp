//
// Created by gabonm7 on 17/09/24.
//

#include "LinkedList.h"


LinkedList::~LinkedList() {
    nodeLL* actual = cabeza;
    while (actual) {
        nodeLL* siguiente = actual->getNext();
        delete actual;
        actual = siguiente;
    }
}

int LinkedList::getPos(int position) {

    nodeLL* actual = cabeza;
    int pos = 0;
    while (actual) {
        if(pos == position) {
            return actual->getData();
        }else {
            nodeLL* siguiente = actual->getNext();
            actual = siguiente;
            pos++;
        }

    }
    return -1;
}

void LinkedList::setPos(int position, int value) {

    nodeLL* actual = cabeza;
    int pos = 0;
    while (actual) {
        if(pos == position) {
            actual->setData(value);
            return;
        }else {
            nodeLL* siguiente = actual->getNext();
            actual = siguiente;
        }
    }
}

void LinkedList::append(int value) {
    if (!cabeza) {
        cabeza = new nodeLL(value);
        return;
    }

    // Si la lista no está vacía, recorre hasta el final
    nodeLL* actual = cabeza;
    while (actual->getNext()) {
        actual = actual->getNext();  // Moverse al siguiente nodo
    }

    // Añadir el nuevo nodo al final de la lista
    actual->setNext(new nodeLL(value));
}

void LinkedList::deleteNode(int posicion) {
    if (posicion < 0 || !cabeza) {
        return;
    }

    // Caso especial: eliminar el primer nodo (posición 0)
    if (posicion == 0) {
        nodeLL* temp = cabeza;
        cabeza = cabeza->getNext();
        delete temp;
        return;
    }

    // Recorrer la lista para encontrar el nodo en la posición dada
    nodeLL* actual = cabeza;
    nodeLL* anterior = nullptr;
    int contador = 0;

    while (actual && contador < posicion) {
        anterior = actual;
        actual = actual->getNext();
        contador++;
    }

    // Si la posición es mayor que el número de nodos en la lista
    if (!actual) {
        return;
    }

    anterior->setNext(actual->getNext());  // Conectar el nodo anterior con el siguiente nodo de actual
    delete actual;  // Eliminar el nodo actual
    actual = nullptr;  // Evitar un puntero colgante
}