#include <stdio.h>
#include <stdlib.h>

#ifndef LIB_STACK_H
#define LIB_STACK_H

#define MAX 10

#define TRUE 1
#define FALSE 0

struct Stack {
    int items[MAX];
    int top;
};

void create_stack(struct Stack *s);
void push(struct Stack *s, int item);
void pop(struct Stack *s);
int is_full(struct Stack *s);
int is_empty(struct Stack *s);
void print_stack(struct Stack *s);

#endif
