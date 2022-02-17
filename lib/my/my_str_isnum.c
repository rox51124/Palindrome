/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** my_str_isnum
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return 1;
    return 0;
}