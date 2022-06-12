/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:28:55 by dactuall          #+#    #+#             */
/*   Updated: 2022/06/11 15:28:56 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_all	*all)
{
	if (!all)
		return ;
	if ((all->len_a == 2) && (all->a->num < all->a->next->num))
		sa(all);
	else if (all->len_a == 3)
		ft_sort_3(all, all->a);
	else if (all->len_a <= 5)
		ft_sort_5(all);
	else
		ft_sort_main(all);
}

void	ft_sort_3(t_all *all, t_list *lst)
{
	if (lst->next->next->num > lst->next->num
		&& lst->num > lst->next->next->num)
		sa(all);
	else if (lst->num < lst->next->num
		&& lst->next->num < lst->next->next->num)
	{
		sa(all);
		rra(all);
	}
	else if (lst->next->num < lst->num
		&& lst->next->next->num > lst->num)
		ra(all);
	else if (lst->next->next->num < lst->num
		&& lst->next->num > lst->num)
	{
		sa(all);
		ra(all);
	}
	else if (lst->next->next->num < lst->next->num
		&& lst->num < lst->next->next->num)
		rra(all);
}

int	ft_optimal_min(t_all	*all)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = all->a;
	while (tmp->index != all->min)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_sort_5(t_all	*all)
{
	t_list	*tmp_last;

	while (all->len_a > 3)
	{
		tmp_last = ft_lstlast(all->a);
		ft_find_min(all, all->a, all->len_a);
		while (tmp_last->index != all->min)
		{
			if (ft_optimal_min(all) > 2)
				ra(all);
			else
				rra(all);
			tmp_last = ft_lstlast(all->a);
		}
		pb(all);
	}
	ft_sort_3(all, all->a);
	while (all->len_b)
		pa(all);
}

void	ft_unsort_3(t_all	*all)
{
	if (all->b->next->next->num > all->b->next->num
		&& all->b->num > all->b->next->next->num)
		rrb(all);
	else if (all->b->num > all->b->next->num
		&& all->b->next->num > all->b->next->next->num)
	{
		sb(all);
		rrb(all);
	}
	else if (all->b->next->num < all->b->num
		&& all->b->next->next->num > all->b->num)
	{
		sb(all);
		rb(all);
	}
	else if (all->b->next->next->num < all->b->num
		&& all->b->next->num > all->b->num)
		rb(all);
	else if (all->b->next->next->num < all->b->next->num
		&& all->b->num < all->b->next->next->num)
		sb(all);
}
