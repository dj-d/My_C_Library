#include <stdio.h>
#include <stdlib.h>
#include "lib_linked_list.h"

struct Node *create_node(int data) {
    struct Node *new_node = malloc(sizeof(struct Node));

    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

void add_node(struct Node *src, int data) {
    struct Node *new_node = create_node(data);

    src->next = new_node;
}

void print_list(struct Node *n) {
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
}