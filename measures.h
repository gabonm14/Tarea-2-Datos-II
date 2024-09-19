//
// Created by gabonm7 on 18/09/24.
//

#ifndef MEASURES_H
#define MEASURES_H


#include <vector>
#include <chrono>
#include "LinkedList.h"
#include "BinaryTree.h"
#include "Sorters.h"

class Measures {
public:
    // Medir tiempo de búsqueda en Sorted Linked List
    double medirTiempoBusquedaSortedLinkedList(std::vector<int>& data, int caso);

    // Medir tiempo de inserción en Binary Search Tree
    double medirTiempoBusquedaBST(std::vector<int>& data, int caso);

    // Medir tiempo de ejecución para BubbleSort
    double medirTiempoBubbleSort(std::vector<int>& data);

    // Medir tiempo de ejecución para SelectionSort
    double medirTiempoSelectionSort(std::vector<int>& data);

    // Medir tiempo de ejecución para MergeSort
    double medirTiempoMergeSort(std::vector<int>& data);
};



#include "measures.cpp"
#endif // MEASURES_H
