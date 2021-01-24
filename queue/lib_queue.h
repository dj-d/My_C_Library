#include <stdio.h>
#include <stdlib.h>

#ifndef LIB_QUEUE_H
#define LIB_QUEUE_H

#define SIZE 40

#define TRUE 1
#define FALSE 0

struct Queue {
    int items[SIZE]; // Array degli elementi

    int front;      // Testa della coda
    int rear;       // Coda della coda
};

struct Queue *create_queue();
int is_empty(struct Queue *q);
void enqueue(struct Queue *q, int value);
int dequeue(struct Queue *q);
void print_queue(struct Queue *q);

#endif
