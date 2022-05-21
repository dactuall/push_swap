#include "push_swap.h"

int	ft_free_split(char	**arr_split, int	i)
{
	if (!arr_split)
	{
		while (i >= 0)
		{
			free(arr_split[i]);
			i--;
		}
		free(arr_split);
		return (1);
	}
	return (0);
}

int	ft_len_word(char	*str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}



char	**ft_split(char	*str, char	c)
{
	char	**arr_split;
	int	i;

	if (!str)
		return (NULL);
	arr_split = (char **) malloc(ft_word_count(str, c) + 1 * sizeof(char *));
	if (!arr_split)
		return (NULL);
	i = 0;
	while (i < ft_word_count(str, c))
	{
		while (*str && *str == c)
			str++;
		arr_split[i] = ft_substr(str, 0, ft_len_word(str, c));
		if (ft_free_split(arr_split, i))
			return (NULL);
		while (*str && *str != c)
			str++;
		i++;
	}
	arr_split[i] = NULL;
	return (arr_split);
}
