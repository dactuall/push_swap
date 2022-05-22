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

int	main(int	argc, char	**argv)
{
	int	i;
	int	*arr_num;

	if (argc < 2)
		return (0);
	arr_num = ft_validation(argv);
	i = 0;
	while (i < ft_nums_count(argv))
	{
		printf("%d\n", arr_num[i]);
		i++;
	}
	return (0);
}
