/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:10:17 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/22 12:10:19 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_putstr(char	*str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	ft_exit_error(char	*error)
{
	ft_putstr(error);
	exit(0);
}

void	ft_free_arr_split(char	**arr_split, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arr_split[i]);
		i++;
	}
	free(arr_split);
}

int	ft_free_all(char	*error, int	*arr_num, t_all	*all)
{
	if (error)
		ft_putstr(error);
	if (arr_num)
		free(arr_num);
	ft_lstclear(all);
	exit(0);
}
