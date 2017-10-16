//
// Created by Adrian Zanga on 10.10.17.
//

typedef struct treenode_st {
    int value;
    struct treenode_st *left;
    struct treenode_st *right;
} TreeNode;

TreeNode * insert(TreeNode *node, int val);
TreeNode * lookup(TreeNode *node, int val);
void printBFS(TreeNode *node);
