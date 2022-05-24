/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:50:09 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/24 13:50:10 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_all	*all)
{
	t_list	*tmp_prev;

	if (all->a == NULL || ft_lstlast(all->a) == NULL)
		return ;
	if (all->len_a == 1)
	{
		ft_lstadd_back(&all->b, ft_lstlast(all->a));
		all->a = NULL;
	}
	else
	{
		tmp_prev = ft_find_prev(all->b);
		ft_lstadd_back(&all->b, ft_lstlast(all->b));
		tmp_prev->next = NULL;
	}
	all->len_a--;
	all->len_b++;
	if (all->flags != -2)
		ft_putstr("pb");
}
