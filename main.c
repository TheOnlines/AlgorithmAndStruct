#include <stdio.h>

#include "library/SortingAlgorithm/SortingAlgorithm.h"



int main() {

    int a[10] = {5, 2, 6, 0, 3, 9, 1, 7, 4, 8};

    sortMerging(a, 10);

    for (int i = 0; i < 10; ++i) {
        printf("%d\n", a[i]);
    }
    return 0;
}



