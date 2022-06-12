/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_main_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:20:09 by dactuall          #+#    #+#             */
/*   Updated: 2022/06/11 13:20:10 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_del_flag(t_all *all, t_list	**lst)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->flag = -1;
	all->next++;
}

void	pa_del_ra(t_all *all)
{
	pa(all);
	ft_del_flag(all, &all->a);
	ra(all);
}

void	del_ra(t_all *all)
{
	ft_del_flag(all, &all->a);
	ra(all);
}

void	pa_pa_del_ra_del_ra(t_all	*all)
{
	pa(all);
	pa(all);
	ft_del_flag(all, &all->a);
	ra(all);
	ft_del_flag(all, &all->a);
	ra(all);
}

void	pa_pa_pa_del_ra_del_ra_del_ra(t_all	*all)
{
	pa(all);
	pa(all);
	pa(all);
	ft_del_flag(all, &all->a);
	ra(all);
	ft_del_flag(all, &all->a);
	ra(all);
	ft_del_flag(all, &all->a);
	ra(all);
}
