/*
** EPITECH PROJECT, 2024
** my_is_prime.c
** File description:
** prime
*/

#include "include/my.h"

int my_is_prime(int nb)
{
    int i = 2;

    if (nb == 2)
        return (1);
    if (nb == 1)
        return (0);
    if (nb < 1)
        return (0);
    while (i < nb) {
        if ((nb % i) == 0)
            return (0);
        i += 1;
    }
    return (1);
}
