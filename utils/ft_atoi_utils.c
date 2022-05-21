#include "../push_swap.h"

int ft_isint(long long  int x)
{
    if (x >= -2147483648 && x <= 2147483647)
        return (1);
    else
        return (0);
}

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n'
        || c == '\f' || c == '\v' || c == '\r')
        return (1);
    else
        return (0);
}

int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int ft_issign(char  c)
{
    if (c == '-' || c == '+')
        return (1);
    else
        return (0);
}

int ft_exit_error_free(char *error, int *arr_num, char  **arr_split)
{
    char    **arr_split_p;

    if (error)
        ft_putstr(error);
    arr_split_p = arr_split;
    while (*arr_split_p)
    {
        free(arr_split_p);
        arr_split_p++;
    }
    free(arr_split);
    free(arr_num);
    exit(0);
}
