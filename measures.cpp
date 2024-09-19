//
// Created by gabonm7 on 18/09/24.
//

#include "measures.h"
#include <algorithm>

double Measures::medirTiempoBusquedaSortedLinkedList(std::vector<int>& data, int caso) {
    LinkedList assearch;

    // Preparar datos según el caso (peor, mejor, promedio)
    if (caso == 2) {
        std::reverse(data.begin(), data.end());  // Peor caso: Lista en orden inverso
    } else if (caso == 3) {
        std::sort(data.begin(), data.end());  // Mejor caso: Lista ya ordenada
    }

    int a = (caso == 1) ? 1 : (caso == 2 ? data.size() - 1 : data[data.size() / 2]);

    // Medir tiempo
    auto start = std::chrono::high_resolution_clock::now();
    assearch.search(data, a);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    return duration.count();
}

double Measures::medirTiempoBusquedaBST(std::vector<int>& data, int caso) {
    BinarySearchTree bst;
    Node* root = new Node(data.size());

    for (int i : data) {
        bst.insert(root, i);  // Insertar todos los elementos en el árbol
    }

    int a = (caso == 1) ? 0 : (caso == 2 ? 0 : data.size() / 2);

    // Medir tiempo
    auto start = std::chrono::high_resolution_clock::now();
    bst.insert(root, a);  // Buscar o insertar un valor
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    delete root;
    return duration.count();
}


double Measures::medirTiempoBubbleSort(std::vector<int>& data) {
    Sorters sorters;
    auto start = std::chrono::high_resolution_clock::now();
    sorters.bubbleSort(data);  // Ejecutar BubbleSort
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    return duration.count();
}

double Measures::medirTiempoSelectionSort(std::vector<int>& data) {
    Sorters sorters;
    auto start = std::chrono::high_resolution_clock::now();
    sorters.selectionSort(data);  // Ejecutar SelectionSort
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    return duration.count();
}

double Measures::medirTiempoMergeSort(std::vector<int>& data) {
    Sorters sorters;
    auto start = std::chrono::high_resolution_clock::now();
    sorters.mergeSort(data);  // Ejecutar MergeSort
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    return duration.count();
}
