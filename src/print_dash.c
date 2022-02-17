/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** print_dash
*/

#include "my.h"
#include <stdlib.h>

void print_n(var_t *var)
{
    int result = var->num;
    var->iteration = 0;

    for (; var->iteration <= var->max; var->iteration++) {
        if (var->iteration >= var->min && reverse_nb(var) == var->num) {
            printf("%i leads to %i in %i iteration(s) in base %i\n", \
                result, var->num, var->iteration, var->base);
            return;
        }
        var->num = is_palindrome(var);
    }
    printf(SOLUTION);
}

void print_p(var_t *var)
{
    int is_sol = 0;

    for (int i = 0; i <= var->pal; i++) {
        var->num = i;
        is_sol += check_palindrome_p(var);
    }
    if (is_sol == 0)
        printf(SOLUTION);
}