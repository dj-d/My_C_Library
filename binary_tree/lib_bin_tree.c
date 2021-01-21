#include <stdio.h>
#include <stdlib.h>
#include "lib_bin_tree.h"

#define COUNT 5

struct Node *new_node(int data) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));

    node->data = data;

    node->left = NULL;
    node->right = NULL;

    return node;
}

void in_order_visit(struct Node *node) {
    if (node != NULL) {
        in_order_visit(node->left);

        printf("%d ", node->data);

        in_order_visit(node->right);
    }
}

void print2DUtil(struct Node *root, int space) {
    if (root == NULL) {
        return;
    }

    space += COUNT;

    print2DUtil(root->right, space);

    printf("\n");

    for (int i = COUNT; i < space; i++) {
        printf(" ");
    }

    printf("%d\n", root->data);

    print2DUtil(root->left, space);
}

void print_2D(struct Node *root) {
    print2DUtil(root, 0);
}