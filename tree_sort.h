#ifndef TREE_SORT_H
#define TREE_SORT_H

#include "element.h"

typedef enum {
    ASCENDING,
    DESCENDING
} SortingOrder;

void treeSort(Element arr[], unsigned int n, SortingOrder order);

#endif