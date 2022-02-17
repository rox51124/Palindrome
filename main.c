/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** main
*/

#include "my.h"
#include <stdlib.h>

int main_palindrome(int ac, char **av)
{
    var_t *vars = NULL;

    if (verif_error(ac, av))
        return 84;
    vars = all_vars(ac, av);
    if (!vars)
        return 84;
    if (!strcmp(av[1], "-n"))
        print_n(vars);
    if (!strcmp(av[1], "-p"))
        print_p(vars);
    free(vars);
    return 0;
}

int main(int ac, char **av)
{
    if (ac == 2 && (!strcmp(av[1], "-h") || !strcmp(av[1], "--help")))
        return rules();
    return (main_palindrome(ac, av));
}