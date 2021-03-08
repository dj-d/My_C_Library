#ifndef LIB_QUEUE_H
#define LIB_QUEUE_H

#define EMPTY -1

struct Node {
        int data;
        struct Node *next;
    };

Node* head;
Node* tail;

void enqueue(int);
int dequeue();
void print_queue();

#endif