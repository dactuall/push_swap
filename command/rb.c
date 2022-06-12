/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:39:05 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/24 15:39:06 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_all	*all)
{
	t_list	*tmp_last;
	t_list	*tmp;

	if (all->b == NULL)
		return ;
	tmp_last = ft_lstlast(all->b);
	tmp_last->next = all->b;
	tmp = all->b;
	while (tmp->next != tmp_last)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(&all->b, tmp_last);
	if (all->flags != -2)
		ft_putstr("rb");
}
