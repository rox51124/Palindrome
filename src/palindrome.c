/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** is_palindrome_and_iteration
*/

#include "my.h"

int is_palindrome(var_t *var)
{
    int nbr = var->num;
    int reverse_nbr = 0;
    int tmp = nbr;

    for (; tmp != 0;) {
        reverse_nbr *= var->base;
        reverse_nbr += tmp % var->base;
        tmp /= var->base;
    }
    return (nbr + reverse_nbr);
}

int check_palindrome_p(var_t *var)
{
    int res = var->num;
    var->iteration = 0;

    printf_min(var);
    if (var->num == var->pal && var->iteration >= var->min) {
        check_norme_palindrome_p(var);
        printf("%i leads to %i in %i iteration(s) in base %i\n", \
        res, var->num, var->iteration, var->base);
        return 1;
    }
    return 0;
}