/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** my_strncmp.c
*/

#include "include/my.h"

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;

    while (i < n && s1[i] && s2[i]) {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    if (i < n)
        return s1[i] - s2[i];
    return 0;
}
