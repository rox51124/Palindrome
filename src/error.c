/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** error
*/

#include "my.h"

int verif_error_nb(int ac, char **av)
{
    if (my_str_isnum(av[2]))
        return 1;
    if (ac >= 5 && my_str_isnum(av[4]))
        return 1;
    if (ac >= 7 && my_str_isnum(av[6]))
        return 1;
    return 0;
}

int verif_error_cara(int ac, char **av)
{
    if (strcmp(av[1], "-n") && strcmp(av[1], "-p"))
        return 1;
    if (ac >= 5 && strcmp(av[3], "-b") && strcmp(av[3], "-imax") \
    && strcmp(av[3], "-imin"))
        return 1;
    if (ac >= 7 && (strcmp(av[5], "-imax") && strcmp(av[5], "-imin") \
    && strcmp(av[5], "-b")))
        return 1;
    if (ac >= 7 && !strcmp(av[3], av[5]))
        return 1;
    return 0;
}

int verif_error(int ac, char **av)
{
    if (ac < 3 || ac % 2 == 0) {
        printf(ERROR);
        return 1;
    }
    if (verif_error_nb(ac, av)) {
        printf(ERROR);
        return 1;
    }
    if (verif_error_cara(ac, av)) {
        printf(ERROR);
        return 1;
    }
    return 0;
}