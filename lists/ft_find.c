/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_prev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:30:44 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/24 15:30:46 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_find_prev(t_list	*lst)
{
	t_list	*tmp_last;

	if (lst == NULL)
		return (NULL);
	tmp_last = ft_lstlast(lst);
	while (lst->next != tmp_last)
		lst = lst->next;
	return (lst);
}

t_list	*ft_find_prev_prev(t_list	*lst)
{
	t_list	*tmp_prev;

	if (lst == NULL)
		return (NULL);
	tmp_prev = ft_find_prev(lst);
	while (lst->next != tmp_prev)
		lst = lst->next;
	return (lst);
}

void	ft_find_med(t_all *all, t_list *lst, int len)
{
	ft_find_min(all, lst, len);
	ft_find_max(all, lst, len);
	all->med = (all->max - all->min) / 2 + all->next;
}

void	ft_find_min(t_all *all, t_list *lst, int len)
{
	t_list	*tmp;
	int		i;
	int		min;

	i = 0;
	tmp = lst;
	min = tmp->index;
	while (i != len)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
		i++;
	}
	all->min = min;
}

void	ft_find_max(t_all *all, t_list *lst, int len)
{
	t_list	*tmp;
	int		i;
	int		max;

	i = 0;
	tmp = lst;
	while (i != len)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
		i++;
	}
	all->max = max;
}
