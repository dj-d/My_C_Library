#include "lib_stack.h"
#include <stdlib.h>
#include <stdio.h>

void push(int val) {
    Node *new_node = (Node *) malloc(sizeof(Node));

    new_node->data = val;
    new_node->next = head;

    head = new_node;
}

int pop() {
    Node *temp;
    int removed_val = EMPTY;

    if (head == NULL) {
        printf("Stack is empty\n");
    } else {
        temp = head;

        head = head->next;
        removed_val = temp->data;

        free(temp);
    }

    return removed_val;
}

void print_stack() {
    Node *temp = head;

    printf("Stack: ");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}