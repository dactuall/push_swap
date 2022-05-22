/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:10:08 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/22 12:10:09 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_s;

	str = 0;
	if (s)
	{
		len_s = ft_strlen(s);
		if (start >= len_s)
			return (ft_strdup(""));
		str = malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
		i = 0;
		while (s[start] != '\0' && i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
	}
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	size_t	l;
	char	*dst;

	l = ft_strlen(s1);
	dst = (char *) malloc(l + 1);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, l + 1);
	dst[l] = '\0';
	return (dst);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	unsigned char	*sc;

	sc = (unsigned char *)src;
	dt = (unsigned char *)dst;
	if (dt == NULL && sc == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return (dst);
}

int	ft_free(char **splited, int i)
{
	if (!splited[i])
	{
		while (i >= 0)
		{
			free(splited[i]);
			i--;
		}
		free(splited);
		return (1);
	}
	return (0);
}
