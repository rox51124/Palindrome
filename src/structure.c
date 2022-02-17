/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** structure
*/

#include "my.h"
#include <stdlib.h>

void initialization_vars(var_t *var)
{
    var->num = 0;
    var->pal = 0;
    var->base = 10;
    var->min = 0;
    var->max = 100;
}

void correspondence_from_vars(var_t *var, char *call, int value)
{
    if (!strcmp(call, "-n"))
        var->num = value;
    if (!strcmp(call, "-p"))
        var->pal = value;
    if (!strcmp(call, "-b"))
        var->base = value;
    if (!strcmp(call, "-imin"))
        var->min = value;
    if (!strcmp(call, "-imax"))
        var->max = value;
}

int error_vars(var_t *var)
{
    if (var->num < 0 && var->pal < 0) {
        printf(ERROR);
        return 1;
    }
    if (var->base <= 1 || var->base > 10) {
        printf(ERROR);
        return 1;
    }
    if (var->min < 0 || var->max < 0 || var->min > var->max) {
        printf(ERROR);
        return 1;
    }
    return 0;
}

var_t *all_vars(int ac, char **av)
{
    var_t *ret = NULL;

    ret = malloc(sizeof(var_t));
    if (!ret)
        return NULL;
    initialization_vars(ret);
    for (int i = 1; i < ac; i += 2)
        correspondence_from_vars(ret, av[i], atoi(av[i + 1]));
    if (error_vars(ret)) {
        free(ret);
        return NULL;
    }
    return ret;
}