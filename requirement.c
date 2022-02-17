/*
** EPITECH PROJECT, 2021
** B-SYN-200-TLS-2-1-palindrome-roxane.baert
** File description:
** requirement
*/

int my_factrec_synthesis(int nb)
{
    if (nb == 0 || nb == 1)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    return (nb * my_factrec_synthesis(nb - 1));
}

int my_squareroot_synthesis(int nb)
{
    int ret = 0;

    if (nb == 1 || nb == 0)
        return nb;
    for (; ret <= 45000; ret++)
        if ((ret * ret) == nb)
            return ret;
    return -1;
}