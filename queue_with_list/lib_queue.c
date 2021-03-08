#include "lib_queue.h"
#include <stdlib.h>
#include <stdio.h>

void enqueue(int val) {
    Node * new_node = (Node *) malloc(sizeof(Node));

    new_node->data = val;
    new_node->next = NULL;

    if (head == NULL) {
        head = tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}

int dequeue() {
    Node *temp;
    int removed_val = EMPTY;

    if (head == NULL) {
        printf("Queue is Empty\n");
    } else {
        removed_val = head->data;

        temp = head;
        head = head->next;

        free(temp);
    }

    return removed_val;
}

void print_queue() {
    Node *temp = head;

    printf("Stack: ");

    while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }

    printf("\n");
}