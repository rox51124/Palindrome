/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** function_p
*/

#include "my.h"

int printf_min(var_t *var)
{
    var->iteration = 0;

    for (; var->iteration < var->min; var->iteration++)
        var->num = is_palindrome(var);
    for (; var->num < var->pal && var->iteration < var->max; var->iteration++)
        var->num = is_palindrome(var);
}

int check_norme_palindrome_p(var_t *var)
{
    if (base_nb(var) != rev_nb(var)) {
        printf(ERROR);
        exit(84);
    }
}