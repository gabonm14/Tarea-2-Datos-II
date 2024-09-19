//
// Created by gabonm7 on 17/09/24.
//

#include "LinkedList.h"


int LinkedList::search(const std::vector<int>& array, int number) {
    int N = array.size();
    int i = 0;

    for(; i < N; i++) {
        if (array[i] == number)
            break;
        if (array[i] > number) {
            i = -1;
            break;
        }
    }

    if (i == N)
        i = -1;

    return i;
}