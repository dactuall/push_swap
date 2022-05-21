#include "push_swap.h"

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
int	ft_free_s_pointer(char	**arr_split)
{
	char	**arr_p;

	arr_p = arr_split;
	while (arr_p)
	{
		free(*arr_p);
		arr_p++;
	}
	free(arr_split);
	return (0);
}

int	ft_exit_error_free_arr_num_s_pointer(int	*arr_num, char	**arr_split)
{
	ft_free_s_pointer(arr_split);
	free(arr_num);
	ft_exit_error(ERROR);
	return (0);
}
