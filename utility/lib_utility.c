#include <stdio.h>
#include <stdlib.h>
#include "lib_utility.h"

int get_str_lenght(char x[]) {
    int i = 0, num = 0;

    while (x[i] != '\0') {
        if (x[i] != ' ') {
            num++;
        }
        i++;
    }

    return num;
}

char *get_sub_str(char *x, int start, int num_char) {
    char *sub = malloc(num_char);

    for (int i = 0; i < num_char; i++) {
        sub[i] = x[start + i];
    }

    return sub;
}

int is_equal_str(char x[], char y[]) {
    int x_len = get_str_lenght(x);
    int y_len = get_str_lenght(y);

    if (x_len == y_len) {
        int i = 0;

        while ((i < x_len) && (x[i] == y[i])) {
            i++;
        }

        if (i == x_len) {
            return TRUE;
        }
    }

    return FALSE;
}