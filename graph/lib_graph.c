#include <stdio.h>
#include <stdlib.h>
#include "lib_graph.h"

struct Node *create_node(int v) {
    struct Node *new_node = malloc(sizeof(struct Node));

    new_node->vertex = v;
    new_node->next = NULL;

    return new_node;
}

struct Graph *create_graph(int v) {
    struct Graph *graph = malloc(sizeof(struct Graph));

    graph->num_vertices = v;
    graph->adj_lists = malloc(v * sizeof(struct Node*));
    graph->visited = malloc(v * sizeof(int));

    for (int i = 0; i < v; i++) {
        graph->adj_lists[i] = NULL;
        graph->visited[i] = 0;
    }

    return graph;
}

void add_edge(struct Graph *graph, int src, int dest) {
    // Add edge from src to dest
    struct Node *new_node = create_node(dest);
    new_node->next = graph->adj_lists[src];
    graph->adj_lists[src] = new_node;

//    // Add edge from dest to src
//    new_node = create_node(src);
//    new_node->next = graph->adj_lists[dest];
//    graph->adj_lists[dest] = new_node;
}

void show_graph(struct Graph *graph) {
    for (int i = 0; i < graph->num_vertices; i++) {
        struct Node *temp = graph->adj_lists[i];

        printf("Adj list of vertex: %d -> ", i);

        while (temp != NULL) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}


void dfs_visit(struct Graph *graph, int vertex) {
    struct Node *adj_list = graph->adj_lists[vertex];

    graph->visited[vertex] = 1;

    printf("Visited %d\n", vertex);

    while (adj_list != NULL) {
        int connected_vertex = adj_list->vertex;

        printf("Connected vertex: %d\n", connected_vertex);

        if (graph->visited[connected_vertex] == 0) {
            dfs_visit(graph, connected_vertex);
        }

        adj_list = adj_list->next;
    }
}