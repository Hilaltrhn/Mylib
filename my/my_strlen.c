/*
** EPITECH PROJECT, 2024
** my_strlen.c
** File description:
** strlen
*/

#include "include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}
