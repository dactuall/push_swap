#include "../push_swap.h"

int	ft_word_count(const char *s, int	c)
{
	int	flag;
	int	i;
	int	count;

	flag = 0;
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			flag++;
			count++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static int	ft_len_word(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	words = ft_word_count(s, c);
	splited = (char **) malloc((words + 1) * sizeof (char *));
	if (!splited)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		splited[i] = ft_substr(s, 0, ft_len_word(s, c));
		if (ft_free(splited, i))
			return (NULL);
		while (*s && *s != c)
			s++;
		i++;
	}
	splited[i] = NULL;
	return (splited);
}