/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** reverse_nb
*/

#include "my.h"

int reverse_nb(var_t *var)
{
    int nbr = var->num;
    int reverse_nbr = 0;
    int tmp = nbr;

    for (; tmp != 0;) {
        reverse_nbr *= var->base;
        reverse_nbr += tmp % var->base;
        tmp /= var->base;
    }
    return (reverse_nbr);
}

int rev_nb(var_t *var)
{
    int nbr = var->num;
    int reverse_nbr = 0;
    int tmp = nbr;

    while (tmp != 0) {
        reverse_nbr = reverse_nbr * var->base;
        reverse_nbr = reverse_nbr + tmp % var->base;
        tmp = tmp / var->base;
    }
    if (nbr == reverse_nbr)
        return 0;
    else
        return 1;
}

int base_nb(var_t *var)
{
    int tab[10];
    int nbr = nbr = var->num;
    int i = 0;

    for (i = 0; nbr > 0; i++) {
        tab[i] = nbr % var->base;
        nbr /= var->base;
    }
    for (i--; i >= 0; i--);
    return 0;
}