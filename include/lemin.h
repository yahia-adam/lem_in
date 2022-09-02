/*
** EPITECH PROJECT, 2021
** struct
** File description:
** struct
*/

#include "struct.h"

#ifndef LEMIN_H_
    #define LEMIN_H_

void init_struct(ants_t *ants);
void lemin(ants_t *ants);
int count_rooms(char **tab);
int count_end(char **tab);
int count_tunnel(char **tab);
void fill_start(ants_t *ants, char ***tab);
void fill_data(rooms_t *room, char *str);
int check_is_tunnel(char *str);
void skip_comment(char ***tab);
void init_rooms(ants_t *ants, char ***tab);

#endif
