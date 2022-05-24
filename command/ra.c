/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:38:59 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/24 15:39:01 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_all	*all)
{
	t_list	*tmp_last;
	t_list	*tmp;

	if (all->a == NULL)
		return ;
	tmp_last = ft_lstlast(all->a);
	tmp_last->next = all->a;
	tmp = all->a;
	while (tmp->next != tmp_last)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(&all->a, tmp_last);
	if (all->flags != -2)
		ft_putstr("ra");
}