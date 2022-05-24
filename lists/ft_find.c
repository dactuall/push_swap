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
	return (0);
}

t_list	*ft_find_prev_prev(t_list	*lst)
{
	t_list	*tmp_last;

	if (lst == NULL)
		return (NULL);
	tmp_last = ft_find_prev(lst);
	while (lst->next != tmp_last)
		lst = lst->next;
	return (lst);
}