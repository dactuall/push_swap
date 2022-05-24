/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:39:53 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/24 15:39:54 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_all	*all)
{
	t_list	*tmp_last;
	t_list	*tmp_prev;
	t_list	*tmp_prev_prev;

	if (all->b == NULL || all->b->next == NULL)
		return ;
	tmp_last = ft_lstlast(all->b);
	if (all->len_b == 2)
	{
		all->b->next = NULL;
		tmp_last->next = all->b;
		ft_lstadd_front(&all->b, tmp_last);
	}
	else
	{
		tmp_prev = ft_find_prev(all->b);
		tmp_prev_prev = ft_find_prev_prev(all->b);
		tmp_last->next = tmp_prev;
		tmp_prev->next = NULL;
		tmp_prev_prev->next = tmp_last;
	}
	if (all->flags != -2)
		ft_putstr("sb");
}
