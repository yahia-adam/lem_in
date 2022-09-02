/*
** EPITECH PROJECT, 2022
** graphes
** File description:
** display_graph
*/

#include "graph.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

void display_graph(graph_t *g)
{
    node_list_t *n;

    if (g == NULL)
        return;
    for(int i = 0; i != g->nbr_sommet; ++i) {
        n = g->tab_neighbours[i].start;
        printf("(%d) : ", i);
        while (n != NULL) {
            printf("%d, ", n->name);
            n = n->next;
        }
        printf("NULL\n");
    }
}
