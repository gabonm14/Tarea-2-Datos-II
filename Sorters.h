//
// Created by gabonm7 on 18/09/24.
//

#ifndef SORTERS_H
#define SORTERS_H
#include <vector>


class Sorters {
public:
    void bubbleSort(std::vector<int>& arr);
    void selectionSort(std::vector<int>& arr);
    void mergeSort(std::vector<int>& arr);

private:
    void merge(std::vector<int>& arr, int left, int mid, int right);
    void mergeSortHelper(std::vector<int>& arr, int left, int right);
};


#include "Sorters.cpp"
#endif //SORTERS_H
