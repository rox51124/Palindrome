/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** rules
*/

#include "my.h"

int rules(void)
{
    printf("USAGE\n");
    printf("   \t\t./palindrome -n number -p palindrome \
    [-b base] [-imin i] [-imax i]\n\n");
    printf("DESCRIPTION\n");
    printf("   \t-n n \t integer to be transformed (>=0)\n");
    printf("   \t-p pal\t palindromic number to be obtained \
    (incompatible with the -n\n");
    printf("    \t\t option) (>=0)\n");
    printf("   \t\t if defined, all fitting values of n will be output\n");
    printf("   \t-b base\t base in which the procedure will be executed \
    (1<b<=10) [def: 10]\n");
    printf("   \t-imin i\t minimum number of find_iterations, \
    included (>=0) [def: 0]\n");
    printf("   \t-imax i\t maximum number of find_iterations, \
    included (>=0) [def: 100]\n");
    return (0);
}