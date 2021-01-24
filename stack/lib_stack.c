#include <stdio.h>
#include "lib_stack.h"

int count = 0;

struct Stack *create_stack() {
    struct Stack *s = malloc(sizeof(struct Stack));
    s->top = -1;

    return s;
}

void push(struct Stack *s, int item) {
    if (is_full(s)) {
        printf("\nStack is full\n");
    } else {
        s->top++;
        s->items[s->top] = item;
    }

    count++;
}

void pop(struct Stack *s) {
    if(is_empty(s)) {
        printf("\nStack is empty\n");
    } else {
        printf("Popped = %d\n", s->items[s->top]);
        s->top--;
    }

    count--;
}

int is_full(struct Stack *s) {
    if (s->top == MAX - 1) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int is_empty(struct Stack *s) {
    if (s->top == -1) {
        return TRUE;
    } else {
        return FALSE;
    }
}

void print_stack(struct Stack *s) {
    for (int i = 0; i < count; i++) {
        printf("%d\n", s->items[i]);
    }
}