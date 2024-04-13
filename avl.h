#ifndef BST_H
#define BST_H

#include <stdbool.h>

#include "element.h"

typedef struct Node {
    Element key;
    struct Node* left;
    struct Node* right;
    int height;
} Node;

typedef struct AVL {
    Node* root;
} AVL;

AVL* avl_create();
void avl_destroy(AVL* bst);
bool avl_search(AVL* bst, Element key);
void avl_insert(AVL* bst, Element key);
void avl_remove(AVL* bst, Element key);
void avl_print(AVL* bst);

#endif