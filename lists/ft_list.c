/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:13:08 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/22 16:13:10 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (!new)
		return (0);
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
	return (1);
}

void	ft_lstclear(t_all *all)
{
	t_list	*tmp;
	int		i;

	if (!all->a)
		return ;
	i = 0;
	while (i < all->len_a)
	{
		tmp = all->a->next;
		free(all->a);
		all->a = NULL;
		all->a = tmp;
		i++;
	}
	while (all->b)
	{
		tmp = all->b->next;
		free(all->b);
		all->b = NULL;
		all->b = tmp;
	}
	free(all);
}

t_list	*ft_lstnew(int num, int index)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->num = num;
	new->index = index;
	new->flag = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list	*lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}
