//
// Created by gabonm7 on 17/09/24.
//

#include "measures.h"
#include <iostream>
#include <vector>
#include <cstdlib>


int main() {
  Measures medidas;

  // Crear un conjunto de datos de prueba
  std::vector<int> data;
  int N = 1000;  // Número de elementos
  for (int i = 0; i < N; ++i) {
    data.push_back(rand() % 100);  // Generar valores aleatorios
  }

  // Medir tiempo de BubbleSort
  double tiempoBubbleSort = medidas.medirTiempoBubbleSort(data);
  std::cout << "Tiempo de BubbleSort: " << tiempoBubbleSort << " segundos." << std::endl;

  // Medir tiempo de búsqueda en Sorted Linked List (caso promedio)
  double tiempoBusquedaLinkedList = medidas.medirTiempoBusquedaSortedLinkedList(data, 3);
  std::cout << "Tiempo de búsqueda en Linked List (caso promedio): " << tiempoBusquedaLinkedList << " segundos." << std::endl;

  // Medir tiempo de inserción en Binary Search Tree (caso promedio)
  double tiempoBusquedaBST = medidas.medirTiempoBusquedaBST(data, 3);
  std::cout << "Tiempo de búsqueda en Binary Search Tree (caso promedio): " << tiempoBusquedaBST << " segundos." << std::endl;

  return 0;
}
