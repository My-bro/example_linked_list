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

int isalphal_bis(char str)
{
    if ('0' <= str && str <= '9' ||
'A' <= str && str <= 'Z' ||
'a' <= str && str <= 'z' ||
str == '.' ) {
        return (1);
    } else {
        return (0);
    }
}

int countword_bis(char const *str)
{
    int i = 0;
    int i2 = 0;
    while (str[i] != '\0') {
        if (isalphal_bis(str[i]) == 1 && isalphal_bis(str[i + 1]) == 0) {
            i2 += 1;
        }
        ++i;
    }
    return (i2);
}

int *countletter_bis(char const  *str)
{
    int *tab;
    int i = 0;
    int i2 = 0;
    int nb = 0;
    tab = malloc(sizeof(int) * countword_bis(str) + 1);
    while (i2 < countword_bis(str)) {
        while (isalphal_bis(str[i]) == 0) {
            ++i;
        }
        while (isalphal_bis(str[i]) == 1) {
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

char **my_str_to_word_array_bis(char const *str)
{
    int longstr = my_strlen(str), i = 0, iar = 0, iar2 = 0;
    int *tab = tab = countletter_bis(str);
    char **arrah = malloc(sizeof(char*) * (countword_bis(str)) + 1);
    arrah[iar] = malloc(sizeof(char) * tab[iar]);
    while (iar < countword_bis(str)) {
        while (isalphal_bis(str[i]) == 0)
            i += 1;
        while (isalphal_bis(str[i]) == 1) {
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
