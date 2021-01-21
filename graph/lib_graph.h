#include <stdio.h>
#include <stdlib.h>

#ifndef LIB_GRAPH_H
#define LIB_GRAPH_H

struct Node {
    int vertex;
    struct Node *next;
};

struct Graph {
    int num_vertices;
    struct Node **adj_lists;
    int *visited;
};

struct Node *create_node(int v);
struct Graph *create_graph(int v);
void add_edge(struct Graph *graph, int src, int dest);

#endif
