#ifndef LIB_STACK_H
#define LIB_STACK_H

#define EMPTY -1

struct Node {
    int data;
    struct Node *next;
};

Node* head;

push(int);
pop();
print_stack();

#endif
