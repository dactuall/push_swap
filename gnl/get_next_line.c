/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:58:39 by dactuall          #+#    #+#             */
/*   Updated: 2022/06/16 19:58:40 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	buf_next_line(char	*buf, char	**s)
{
	char	*n;

	n = ft_strchar(buf, '\n');
	*n++ = '\0';
	*s = ft_strjoin(*s, buf);
	*s = ft_strjoin(*s, "\n");
	ft_strncpy(buf, n, ft_strlen(n) + 1);
}

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*s;
	long		last;

	if (read(fd, 0, 0) == 1 || BUFFER_SIZE < 1)
		return (NULL);
	last = 1;
	s = ft_strdup("");
	while (!(ft_strchar(buf, '\n') && last > 0))
	{
		s = ft_strjoin(s, buf);
		last = read(fd, buf, BUFFER_SIZE);
		buf[last] = '\0';
	}
	if (last < 0 || (last == 0 && s[0] == '\0'))
	{
		free (s);
		return (NULL);
	}
	if (ft_strchar(buf, '\n'))
		buf_next_line(buf, &s);
	return (s);
}

// int main()
// {
// 	int fd;
// 	fd = open("./test.txt", O_RDONLY);
// 	printf("%s\n", get_next_line(fd));
// }