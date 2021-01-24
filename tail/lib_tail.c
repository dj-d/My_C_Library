#include <stdio.h>
#include <stdlib.h>
#include "lib_tail.h"

struct Queue *create_queue() {
    struct Queue *q = malloc(sizeof(struct Queue));

    q->front = -1;
    q->rear = -1;

    return q;
}

int is_empty(struct Queue *q) {
    if (q->rear == -1) {
        return TRUE;
    } else {
        return FALSE;
    }
}

void enqueue(struct Queue *q, int value) {
    if (q->rear == SIZE - 1) {
        printf("\nQueue is full\n");
    } else {
        if (q->front == -1) {
            q->front = 0;
        }

        q->rear++;
        q->items[q->rear] = value;
    }
}

int dequeue(struct Queue *q) {
    int item;

    if (is_empty(q)) {
        printf("\nQueue is empty\n");

        item = -1;
    } else {
        item = q->items[q->front];
        q->front++;

        if (q->front > q->rear) {
            printf("\nResetting queue\n");

            q->front = q->rear = - 1;
        }
    }

    return item;
}

void print_queue(struct Queue *q) {
    int i = q->front;

    if (is_empty(q)) {
        printf("\nQueue is empty\n");
    } else {
        printf("\nQueue contains: \n");

        for (i = q->front; i < q->rear + 1; i++) {
            printf("%d\n", q->items[i]);
        }
    }
}