#include "../push_swap.h"

int ft_atoi_logic(const char  *str, int   i, int  *arr_num, char  **arr_split)
{
    long long int   x;

    x = 0;
    while (ft_isdigit(str[i]) && str[i] != '\0')
    {
        x = x * 10 + (str[i] - '0');
        i++;
    }
    if (str[i] != '\0')
        return (ft_exit_error_free(ERROR3, arr_num, arr_split));
    if (str[0] != '-' && ft_isint(x))
        return (x);
    else if (str[0] == '-' && ft_isint(-x))
        return (-x);
    else
        return (ft_exit_error_free(ERROR4, arr_num, arr_split));
}

int ft_atoi(const char    *str, int   *arr_num, char  **arr_split)
{
    int i;

    i = 0;
    if (str[i] == '\0')
        ft_exit_error_free(ERROR1, arr_num, arr_split);
    while (ft_isspace(str[i]))
        i++;
    if (ft_isdigit(str[i]))
        return (ft_atoi_logic(str, i, arr_num, arr_split));
    else if (ft_issign(str[i]) && ft_isdigit(str[i + 1]))
        return (ft_atoi_logic(str, i + 1, arr_num, arr_split));
    else
     	   return (ft_exit_error_free(ERROR2, arr_num, arr_split));
}
