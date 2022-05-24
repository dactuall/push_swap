/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:39:41 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/24 15:39:42 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_all	*all)
{
	t_list	*tmp_last;
	t_list	*tmp;

	if (all->a == NULL || ft_lstlast(all->a) == NULL)
		return ;
	if (all->b == NULL || ft_lstlast(all->b) == NULL)
		return ;
	tmp = all->a;
	all->a = all->a->next;
	tmp_last = ft_lstlast(all->a);
	tmp_last->next = tmp;
	tmp_last->next->next = NULL;
	tmp = all->b;
	all->b = all->b->next;
	tmp_last = ft_lstlast(all->b);
	tmp_last->next = tmp;
	tmp_last->next->next = NULL;
	if (all->flags != -2)
		ft_putstr("rrr");
}
