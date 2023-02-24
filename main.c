/*
** EPITECH PROJECT, 2023
** stomper
** File description:
** boostrap mynavy
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "Include/node.h"

int error_case(int ac ,char **av)
{
    if (ac != 2) {
        return 84;
    }
    return 0;
}

chain_t *add_node(chain_t **head, chain_t **tail, chain_t **node)
{
    if (*head == NULL) {
        *head = *node;
        *tail = *node;
    } else {
        (*tail)->next = *node;
        *tail = *node;
    }
    return *head;
}

int main(int ac ,char **av)
{
    chain_t *head = NULL;
    chain_t *tail = NULL;
    int a = 0;
    int i = 0;
    int flag = 0;
    char *db[] = {

    }
    
    while (i < 20)
    {
        flag += (flag == 0);
        printf("%d\n",flag);
        ++i;
        ++a;
    }
    for (int i = 1; i < ac; ++i) {
        chain_t *node = (chain_t*)malloc(sizeof(chain_t));
        node->str = av[i];
        add_node(&head,&tail,&node);
        node = node->next;
    }
    /*
    while (head != NULL) {
        printf("%s\n",head->str);
        head = head->next;
    }
    */
    return 0;
}
