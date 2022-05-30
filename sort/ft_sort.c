#include "../push_swap.h"

void	ft_sort(t_all	*all)
{
	if (!all)
		return ;
	if (all->len_a == 2) && (all->a->num < all->a->next->num))
		sa(all);
	else if (all->len_a == 3)
		ft_sort_3(all, all->a);
	else if (all->len_a <= 5)
		ft_sort_5(all, all->a);
	else
		ft_sort_main(all);
}

void	ft_sort_3(t_all	*all, t_list	*lst)
{
	if (lst->next->next->num > lst->next->num
		&& lst->next->next->num > lst->num)
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
		&& lst->num < lst->next-next->num)
		rra(all);
}

int	ft_optimal_min(t_all	*all)
{
	t_all	*tmp;
	int	i;

	i = 0;
	tmp = all->a;
	while (tmp->next != all->min)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_find_min(t_all	*all, t_list	*lst, int	len)
{
	t_all	*tmp;
	int	i;
	int	min;

	i = 0;
	tmp = lst;
	min = tmp->index;
	while (i != len)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	all->min = min;
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
	ft_soring_3(all, all->a);
	while (all->len_b)
		pa(all);
}
