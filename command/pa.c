/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:20:20 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/24 12:20:22 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_all	*all)
{
	t_list	*tmp_prev;
	
	if (all->b == NULL || ft_lstlast(all->b) == NULL)
		return ;
	if (all->len_b == 1)
	{
		ft_lstadd_back(&all->a, ft_lstlast(all->b));
		all->b = NULL;
	}
	else
	{
		tmp_prev = ft_find_prev(all->b);
		ft_lstadd_back(&all->a, ft_lstlast(all->b));
		tmp_prev->next = NULL;
	}
	all->len_b--;
	all->len_a++;
	if (all->flags != -2)
		ft_putstr("pa");
}
