#include <stdio.h>

#include "tree_sort.h"
#include "avl.h"

void sortAscending(Node* node, Element arr[], int* i){
    if(node == NULL)
        return;
    sortAscending(node->left, arr, i);
    arr[*i++] = node->key;
    sortAscending(node->right, arr, i);
}

void sortDescending(Node* node, Element arr[], int* i){
    if(node == NULL)
        return;
    sortDescending(node->right, arr, i);
    arr[*i++] = node->key;
    sortDescending(node->left, arr, i);
}

void treeSort(Element arr[], unsigned int n, SortingOrder order){
    AVL* avl = avl_create();
    int count = 0;
    while(count != n){
        avl_insert(avl, arr[count]);
        count++;
    }
    //caso de percurso in order
    if(order == ASCENDING){
        int i = 0;
        int* p = &i;
        sortAscending(avl->root, arr, p);
    }
    else{
        int i = 0;
        int* p = &i;
        sortDescending(avl->root, arr, p);
    }
}
