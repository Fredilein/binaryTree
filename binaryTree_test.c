#include "binaryTree.h"

#include <stdio.h>

int main() {

    printf("los gehts.");

    TreeNode *root = NULL;
    root = insert(root, 4);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 5);
    printBFS(root);

    if (lookup(root, 6) == NULL) printf("nope.");
    else printf("yup");

    return 0;
}

