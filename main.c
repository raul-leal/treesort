#include <stdio.h>

#include "tree_sort.h"

void printArray(Element arr[], unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    Element a[] = {5, 3, 7, 1, 4, 6, 8, 2, 9, 0};
    Element b[] = {5, 3, 7, 1, 4, 6, 8, 2, 9, 0};

    printArray(a, 10);
    treeSort(a, 10, ASCENDING);
    printArray(a, 10);
    printf("\n");
    printArray(b, 10);
    treeSort(b, 10, DESCENDING);
    printArray(b, 10);
    
    return 0;
}
