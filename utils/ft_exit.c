#include "../push_swap.h"

void    ft_putstr(char  *str)
{
    while (*str)
        write(1, str++, 1);
}

int	ft_exit_error(char	*error)
{
	ft_putstr(error);
	exit(0);
}

char	**ft_free_arr_split(char	**arr_split, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arr_split[i]);
		i++;
	}
	free(arr_split);
	return (NULL);
}