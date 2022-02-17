/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** palindrome
*/

#ifndef PALINDROME_H_
    #define PALINDROME_H_

    static char const ERROR[] = "invalid argument\n";
    static char const SOLUTION[] = "no solution\n";

    typedef struct var_s
    {
        int num;
        int pal;
        int base;
        int min;
        int max;
        int iteration;
    } var_t;

    int rules(void);
    int verif_error(int ac, char **av);
    var_t *all_vars(int ac, char **av);
    void print_n(var_t *var);
    void print_p(var_t *var);
    int is_palindrome(var_t *var);
    int find_iteration(var_t *var);
    int error_vars(var_t *var);
    int check_palindrome_p(var_t *var);
    int printf_min(var_t *var);
    int check_norme_palindrome_p(var_t *var);
    int rev_nb(var_t *var);
    int base_nb(var_t *var);
#endif /* !PALINDROME_H_ */