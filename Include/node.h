/*
** EPITECH PROJECT, 2022
** chained list struct
** File description:
** make the struct
*/

#include <stdarg.h>

#ifndef LINK_STRUCT
    #define LINK_STRUCT
        typedef struct chain_s {
            char *str;
            struct chain_s *next;
            struct chain_s *left;
            struct chain_s *right;
        } chain_t;
#endif
