#include <stdio.h>
#include <stdlib.h>

#ifndef LIB_TREE_H
#define LIB_TREE_H

struct Node {
    int data;

    struct Node *left;
    struct Node *right;
};

struct Node *new_node(int data);
void in_order_visit(struct Node *node);
void post_order_visit(struct Node *node);
void pre_order_visit(struct Node *node);
void print_2D(struct Node *root);

#endif