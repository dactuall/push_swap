/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:58:47 by dactuall          #+#    #+#             */
/*   Updated: 2022/06/16 19:58:48 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strchar(const char	*str, int a)
{
	int		i;
	char	*p;

	i = 0;
	p = (void *)0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)a)
		{
			p = (void *)&str[i];
			return (p);
		}
		i++;
	}
	if ((char)a == '\0')
		p = ((void *)&str[i]);
	return (p);
}

char	*ft_strncpy(char	*dest, char	*src, int len)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < len)
	{
		dest[i] = '\0';
		i++;		
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*p;
	void	*tmp;

	tmp = (void *)s1;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	p = dest;
	while (*s1 != '\0')
		*dest++ = *s1++;
	while (*s2 != '\0')
		*dest++ = *s2++;
	*dest++ = '\0';
	free (tmp);
	return (p);
}

// int main()
// {
// 	char *str = "Ramaz";
// 	char *str1 = "Sanya";
// 	char c = 'm';
// 	int	len = 5;
// 	//printf("%s\n", ft_strchar(str, c));
// 	//printf("%s\n", ft_strncpy(str, str1, len));
//  printf("%s\n", ft_strjoin(str, str1));
// }
