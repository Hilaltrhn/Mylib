/*
** EPITECH PROJECT, 2024
** my_put_nbr.c
** File description:
** putnbr
*/

#include "include/my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    } else
        my_putchar(nb + '0');
}
