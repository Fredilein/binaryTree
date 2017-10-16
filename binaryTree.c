#include "binaryTree.h"

#include <stdio.h>
#include <stdlib.h>



TreeNode * insert(TreeNode *node, int val) {

    if (node == NULL) {
        TreeNode *temp;
        temp = (TreeNode *)malloc(sizeof(TreeNode));
        temp->value = val;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    if (val < node->value) {
        node->left = insert(node->left, val);
    }
    else if (val > node->value) {
        node->right = insert(node->right, val);
    }

    return node;

}



TreeNode * lookup(TreeNode *node, int val) {

    if (node == NULL) {
        return NULL;
    }
    else if (node->value < val) return lookup(node->right, val);
    else if (node->value > val) return lookup(node->left, val);
    else return node;

}



void printBFS(TreeNode *node) {
    if (node == NULL) {
        return;
    }
    printf(" %d ", node->value);
    printBFS(node->left);
    printBFS(node->right);
}
