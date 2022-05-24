/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:09:09 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/22 12:09:11 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_validation(char	**argv)
{
	char	**arr_split;
	int	*arr_num;
	int	i;
	int	size;
	int	k;

	arr_num = (int	*)malloc(ft_nums_count(argv) * sizeof (int));
	if (!arr_num)
		ft_exit_error(ERROR);
	i = 0;
	k = 0;
	while (argv[++i])
	{
		if (!argv[i][0])
			ft_exit_error_free(ERROR, arr_num, arr_split);
		arr_split = ft_split(argv[i], ' ');
		size = 0;
		while (arr_split[size])
			arr_num[k++] = ft_atoi(arr_split[size++], arr_num, arr_split);
		ft_free_arr_split(arr_split, size);
	}
	ft_check_dup(arr_num, ft_nums_count(argv));
	ft_check_sort(arr_num, ft_nums_count(argv));
	return (arr_num);
}

void	ft_check_dup(int	*arr_num, int	nums)
{
	int	i;
	int	j;

	i = 0;
	while (i < nums)
	{
		j = i + 1;
		while (j < nums)
		{
			if (arr_num[i] == arr_num[j])
			{
				free(arr_num);
				ft_exit_error(ERROR);
			}
			j++;
		}
		i++;
	}
}

void ft_check_sort(int	*arr_num, int	nums)
{
	int	i;
	int	j;

	i = 0;
	while (i < nums)
	{
		j = i + 1;
		while (j < nums)
		{
			if (arr_num[i] < arr_num[j])
				j++;
			else
				return ;
		}
		i++;
	}
	free(arr_num);
	exit(0);
}

void	ft_is_num(char	*str)
{
	while (*str)
	{
		if (!(ft_isdigit(*str) || (*str == ' ' || *str == '\t' 
            || *str == '-' || *str == '+')))
			ft_exit_error(ERROR);
		else
			str++;
	}
}

int	ft_nums_count(char	**argv)
{
	int	i;
	int	nums;

	i = 0;
	nums = 0;
	while (argv[++i])
	{
		ft_is_num(argv[i]);
		nums += ft_word_count(argv[i], ' ');
	}
	if (i > nums + 1)
		return (ft_exit_error(ERROR));
	else if (nums < 2)
		exit(0);
	else
		return (nums);
}
