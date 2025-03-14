/*
** EPITECH PROJECT, 2024
** my_revstr.c
** File description:
** revstr
*/

#include "include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char a;

    while (str[i] != '\0')
        i++;
        i -= 1;
    while (i != j && i > j) {
        a = str[i];
        str[i] = str[j];
        str[j] = a;
        i--;
        j++;
    }
    return (str);
}
