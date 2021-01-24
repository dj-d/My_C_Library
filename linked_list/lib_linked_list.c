#include <stdio.h>
#include <stdlib.h>
#include "lib_linked_list.h"

struct Node *create_node(int data) {
    struct Node *new_node = malloc(sizeof(struct Node));

    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

// In this case we take it for granted that there is a head
void append(struct Node *src, int data) {
    struct Node *last = src;

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = create_node(data);
}

// In this case we check if there is a head or not
void add_node(struct Node **src, int data) {
    struct Node *new_node = create_node(data);

    struct Node *last = *src;

    if (*src == NULL) {
        *src = new_node;
    } else {
        while (last->next != NULL) {
            last = last->next;
        }

        last->next = new_node;
    }
}

void print_list(struct Node *n) {
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
}