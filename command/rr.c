/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:39:13 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/24 15:39:15 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_all	*all)
{
	t_list	*tmp_last;
	t_list	*tmp;

	if (all->a == NULL || all->b == NULL)
		return ;
	tmp_last = ft_lstlast(all->a);
	tmp_last->next = all->a;
	tmp = all->a;
	while (tmp->next != tmp_last)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(&all->a, tmp_last);
	tmp_last = ft_lstlast(all->b);
	tmp_last->next = all->b;
	tmp = all->b;
	while (tmp->next != tmp_last)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(&all->b, tmp_last);
	if (all->flags != -2)
		ft_putstr("rr");
}