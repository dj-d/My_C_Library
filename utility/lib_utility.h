#include <stdio.h>
#include <stdlib.h>

#ifndef LIB_UTILITY_H
#define LIB_UTILITY_H

#define TRUE 1
#define FALSE 0

int get_str_lenght(char x[]);
char *get_sub_str(char *x, int start, int num_char);
int is_equal_str(char x[], char y[]);
int get_max(int x, int y);
int get_min(int x, int y);

#endif //MY_C_LIBRARY_LIB_UTILITY_H
