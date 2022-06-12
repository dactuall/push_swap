/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:09:26 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/22 12:09:27 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char	**argv)
{
	t_all	*all;

	if (argc < 2)
		return (0);
	all = ft_init(ft_validation(argv), ft_nums_count(argv));
	ft_sort(all);
	ft_free_all(NULL, NULL, all);
	return (0);
}
