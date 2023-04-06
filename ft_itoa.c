#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char    digits_to_str(int n, int i)
{
    char *s;

    s = "0123456789";
    while (i--)
        n /= 10;
    return (s[n % 10]);
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
    int     minus;
    int     i;

    minus = 0;
    if (n < 0)
        minus = 1;
    res = (char *)malloc(num_len(n) + minus + 1);
    if (n == -2147483648)
        return("-2147483648");
    if (minus)
        n = -n;
    if (minus)
        res[0] = '-';
    i = minus;
    while (i < (num_len(n) + minus))
    {
        res[i] = digits_to_str(n, num_len(n) + minus - i - 1);
        i++;
    }
    res[i] = '\0';
    return (res);
}
