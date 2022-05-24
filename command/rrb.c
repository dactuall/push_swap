/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:39:33 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/24 15:39:35 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_all	*all)
{
	t_list	*tmp_last;
	t_list	*tmp;

	if (all->b == NULL || ft_lstlast(all->b) == NULL)
		return ;
	tmp = all->b;
	all->b = all->b->next;
	tmp_last = ft_lstlast(all->b);
	tmp_last->next = tmp;
	tmp_last->next->next = NULL;
	if (all->flags != -2)
		ft_putstr("rrb");
}