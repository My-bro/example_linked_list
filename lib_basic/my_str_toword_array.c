/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** take a char and return char**
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);
int my_printf(const char * format , ...);

int isalphal(char str)
{
    if (str != '\n') {
        return (1);
    } else {
        return (0);
    }
}

int countword(char const *str)
{
    int i = 0;
    int i2 = 0;
    while (str[i] != '\0') {
        if (isalphal(str[i]) == 1 && isalphal(str[i + 1]) == 0) {
            i2 += 1;
        }
        ++i;
    }
    return (i2);
}

int *countletter(char const  *str)
{
    int *tab;
    int i = 0;
    int i2 = 0;
    int nb = 0;
    tab = malloc(sizeof(int) * countword(str) + 1);
    while (i2 < countword(str)) {
        while (isalphal(str[i]) == 0) {
            ++i;
        }
        while (isalphal(str[i]) == 1) {
            ++nb;
            ++i;
        }
        tab[i2] = nb + 1;
        ++i2;
        nb = 0;
    }
    tab[i2] = 0;
    return tab;
}

char **my_str_to_word_array(char const *str)
{
    int longstr = my_strlen(str), i = 0, iar = 0, iar2 = 0;
    int *tab = countletter(str);
    char **arrah = malloc(sizeof(char*) * (countword(str)) + 1);
    arrah[iar] = malloc(sizeof(char) * tab[iar]);
    while (iar < countword(str)) {
        while (isalphal(str[i]) == 0)
            i += 1;
        while (isalphal(str[i]) == 1) {
                arrah[iar][iar2] = str[i];
                ++i, ++iar2;
        }
        arrah[iar][iar2] = '\0';
        iar += 1;
        iar2 = 0;
        if (str[i] != '\0') {
            arrah[iar] = malloc(sizeof(char) * tab[iar]);
        }
    }
    arrah[i] = NULL;
    return arrah;
}
