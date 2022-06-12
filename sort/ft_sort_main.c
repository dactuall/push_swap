/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:27:19 by dactuall          #+#    #+#             */
/*   Updated: 2022/06/11 15:27:21 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_main(t_all	*all)
{
	t_list	*tmp_last;

	ft_start_sort(all, all->len_a);
	while (all->len_b > 3)
	{
		ft_sort_b(all, all->len_b);
		all->flags++;
	}
	if (all->len_b > 0)
		ft_last_b_sort(all);
	while (all->flags != -1)
	{
		ft_start_sort(all, all->len_a);
		while (all->len_b > 3)
		{
			ft_sort_b(all, all->len_b);
			all->flags++;
		}
		if (all->len_b > 0)
			ft_last_b_sort(all);
		tmp_last = ft_lstlast(all->a);
		all->flags = tmp_last->flag;
	}
}

void	ft_start_sort(t_all *all, int len_a)
{
	t_list	*tmp_last;
	t_list	*tmp_prev;

	ft_find_med(all, all->a, all->len_a);
	tmp_last = ft_lstlast(all->a);
	while (len_a && tmp_last->flag == all->flags && all->len_b <= all->med)
	{
		tmp_prev = ft_find_prev(all->a);
		if (tmp_last->index == all->next && all->a->flag == -1)
			del_ra(all);
		else if (tmp_prev->index == all->next
			&& tmp_last->index == all->next + 1 && all->a->flag == -1)
		{
			sa(all);
			del_ra(all);
			del_ra(all);
			len_a--;
		}
		else if (tmp_last->index <= all->med)
			pb(all);
		else
			ra(all);
		len_a--;
		tmp_last = ft_lstlast(all->a);
	}
}

void	ft_sort_b(t_all *all, int len_b)
{
	t_list	*tmp_last;
	t_list	*tmp_prev;

	ft_find_med(all, all->b, all->len_b);
	while (len_b > 0)
	{
		tmp_last = ft_lstlast(all->b);
		if (all->len_b > 1)
			tmp_prev = ft_find_prev(all->b);
		if (tmp_last->index == all->next && all->len_b > 3)
			pa_del_ra(all);
		else if (tmp_prev->index == all->next
			&& tmp_last->index == all->next + 1 && all->len_b > 3)
		{
			sb(all);
			pa_del_ra(all);
			pa_del_ra(all);
			len_b--;
		}
		else if (tmp_last->index >= all->med)
			ft_add_flag(all, &all->b, all->flags);
		else if (all->len_b > 1)
			rb(all);
		len_b--;
	}
}

void	ft_last_b_sort(t_all	*all)
{
	if (all->len_b == 0)
		return ;
	else if (all->len_b == 1)
	{
		pa_del_ra(all);
		return ;
	}
	else if (all->len_b > 2)
	{
		ft_unsort_3(all);
		pa_pa_pa_del_ra_del_ra_del_ra(all);
		return ;
	}
	if (all->b->index > all->b->next->index)
		sb(all);
	pa_pa_del_ra_del_ra(all);
}

void	ft_add_flag(t_all *all, t_list **lst, int flags)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->flag = flags + 1;
	pa(all);
}
