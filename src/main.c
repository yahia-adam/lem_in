/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "struct.h"
#include "lemin.h"
#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

int main(int ac, char **av)
{
    ants_t *ants = malloc(sizeof(ants_t));
    graph_t *g = NULL;

    ac = ac;
    av = av;
    init_struct(ants);
    g = new_graph(ants->nbr_rooms, false);
    for (int i = 0; i != ants->nbr_tunnel; ++i)
        add_edge(g, ants->tunnel[i][0], ants->tunnel[i][1]);
    //display_graph(g);
    lemin(ants);
    return 0;
}
