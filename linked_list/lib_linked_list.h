#include <stdio.h>
#include <stdlib.h>

#ifndef LIB_LINKED_LIST_H
#define LIB_LINKED_LIST_H

struct Node {
    int data;
    struct Node *next;
};

struct Node *create_node(int data);
void append(struct Node *src, int data);
void add_node(struct Node **src, int data);
void print_list(struct Node *n);

#endif
