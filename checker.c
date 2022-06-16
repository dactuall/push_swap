/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:28:02 by dactuall          #+#    #+#             */
/*   Updated: 2022/06/16 21:28:03 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_true(t_all	*all, int len_a)
{
	t_list	*tmp;

	tmp = all->a;
	while (len_a && tmp->next != NULL)
	{
		if (tmp->index < tmp->next->index)
			return (0);
		tmp = tmp->next;
		len_a--;
	}
	return (1);
}

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i != n - 1 && s1[i] != '\0')
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	get_cmd(t_all	*all, char	*line)
{
	if (!ft_strncmp(line, "pa\n", 3))
		pa(all);
	else if (!ft_strncmp(line, "pb\n", 3))
		pb(all);
	else if (!ft_strncmp(line, "ra\n", 3))
		ra(all);
	else if (!ft_strncmp(line, "rb\n", 3))
		rb(all);
	else if (!ft_strncmp(line, "rr\n", 3))
		rr(all);
	else if (!ft_strncmp(line, "rra\n", 4))
		rra(all);
	else if (!ft_strncmp(line, "rrb\n", 4))
		rrb(all);
	else if (!ft_strncmp(line, "rrr\n", 4))
		rrr(all);
	else if (!ft_strncmp(line, "sa\n", 3))
		sa(all);
	else if (!ft_strncmp(line, "sb\n", 3))
		sb(all);
	else if (!ft_strncmp(line, "ss\n", 3))
		ss(all);
	else
		ft_free_all(ERROR, NULL, all);
}

void	checker(t_all	*all)
{
	char	*line;

	all->flags = -2;
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		get_cmd(all, line);
	}
	if (sort_true(all, all->len_a) && !all->len_b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	t_all	*all;

	if (argc < 2)
		return (0);
	all = ft_init(ft_validation(argv), ft_nums_count(argv));
	checker(all);
	ft_free_all(NULL, NULL, all);
	return (0);
}
