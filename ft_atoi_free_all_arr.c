#include "push_swap.h"

int	ft_isspase(char	c)
{
	if (c == '\n' || c == '\f' || c == '\v' 
	|| c == '\t' || c == ' ' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_issign(char	c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int	ft_isint(long	x)
{
	if (x >= -2147483648 && x <= 2147483647)
		return (1);
	else
		return (0);
}

int	ft_atoi_logic(const char	*str, int	i, int	*arr_num, char	**arr_split)
{
	long	x;

	x = 0;
	while (str[i] != '\0')
	{
		x *= 10 + (str[i] - '0');
		i++;
	}
	if (str[0] != '-' && ft_isint(x))
		return (x);
	else if (str[0] == '-' && ft_isint(-x))
		return (-x);
	else
		return (ft_exit_error_free_arr_num_s_pointer(arr_num, arr_split));
}

int	ft_atoi(const char	*str, int	*arr_num, char	**arr_split)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (ft_exit_error_free_arr_num_s_pointer(arr_num, arr_split));
	while (ft_isspase(str[i]))
		i++;
	if (ft_isdigit(str[i]))
		return (ft_atoi_logic(str, i, arr_num, arr_split));
	else if (ft_issign(str[i]) && ft_isdigit(str[i + 1]))
		return (ft_atoi_logic(str, i + 1, arr_num, arr_split));
	else
		return (ft_exit_error_free_arr_num_s_pointer(arr_num, arr_split));
}
