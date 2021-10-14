#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


char    on_iter(unsigned int n, int iter)
{
    char *s = "0123456789";
    while (iter--)
        n /= 10;
    return s[n % 10];
}

int num_len(int n)
{
    int count;

    count = 0;
    if(n == 0)
        return(1);
    while (n)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    char    *res;
    int     is_neg;
    unsigned int help_n;
    int     iter;

    is_neg = n < 0;
    res = (char *)malloc(num_len(n) + is_neg + 1);
    if (is_neg)
        help_n = (n + 1) * -1 + 1;
    else
        help_n = n;
    if (is_neg)
        res[0] = '-';
    iter = is_neg;
    while (iter < (num_len(n) + is_neg))
    {
        res[iter] = on_iter(help_n, num_len(n) + is_neg - iter - 1);
        iter++;
    }
    res[iter] = '\0';
    return res;
}
