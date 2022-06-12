/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:18:14 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/22 14:18:16 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_all	*ft_init_t_all(int *arr_num, int nums)
{
	t_all	*all;

	all = (t_all *)malloc(sizeof(t_all));
	if (!all)
		ft_exit_error_free(ERROR, arr_num, NULL);
	all->a = NULL;
	all->b = NULL;
	all->next = 1;
	all->flags = 0;
	all->med = 0;
	all->len_a = nums;
	all->len_b = 0;
	return (all);
}

t_all	*ft_init(int *arr_num, int nums)
{
	int		i;
	int		j;
	int		index;
	t_all	*all;

	all = ft_init_t_all(arr_num, nums);
	i = 0;
	while (i < nums)
	{
		index = 0;
		j = 0;
		while (j < nums)
		{
			if (arr_num[i] > arr_num[j])
				index++;
			j++;
		}
		if (!(ft_lstadd_front(&all->a, ft_lstnew(arr_num[i], index + 1))))
			ft_free_all(ERROR, arr_num, all);
		i++;
	}
	free(arr_num);
	return (all);
}
