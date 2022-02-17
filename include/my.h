/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "palindrome.h"

    #define MY_EVEN(nb) ((nb) % 2)
    #define MY_CHAR_ISNUM(c) (c >= '0' && c <= '9')

    int my_str_isnum(char const *str);
    int reverse_nb(var_t *var);
#endif /* !MY_H_ */