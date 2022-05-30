/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:09:19 by dactuall          #+#    #+#             */
/*   Updated: 2022/05/22 12:09:21 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define ERROR "Error\n"

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_list
{
	int				num;
	int				index;
	int				flag;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

typedef struct s_all
{
	t_list	*a;
	t_list	*b;
	int		flags;
	int		next;
	int		min;
	int		max;
	int		med;
	int		len_a;
	int		len_b;
}	t_all;

/*FILE: ft_atoi_utils.c*/
int ft_isint(long long int	x);
int ft_isspace(char c);
int ft_isdigit(char c);
int ft_issign(char  c);
int ft_exit_error_free(char *error, int *arr_num, char  **arr_split);
/*FILE: ft_atoi.c*/
int ft_atoi(const char    *str, int   *arr_num, char  **arr_split);
/*FILE: ft_split_utils.c*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int	    ft_free(char **splited, int i);
/*FILE: ft_split.c*/
char	**ft_split(char const *s, char c);
int	    ft_word_count(const char *s, int	c);
/*FILE: ft_validation.c*/
int	    *ft_validation(char	**argv);
void    ft_check_sort(int	*arr_num, int	nums);
void	ft_check_dup(int	*arr_num, int	nums);
void	ft_is_num(char	*str);
int     ft_nums_count(char	**argv);
/*FILE: ft_exit.c*/
void    ft_putstr(char  *str);
int	    ft_exit_error(char	*error);
void	ft_free_arr_split(char	**arr_split, int size);
int		ft_free_all(char	*error, int	*arr_num, t_all	*all);
/*FILE: ft_list.c*/
void	ft_lstclear(t_all *all);
t_list	*ft_lstnew(int	num, int	index);
int		ft_lstadd_front(t_list	**lst, t_list	*new);
t_list	*ft_lstlast(t_list	*lst);
void	ft_lstadd_back(t_list	**lst, t_list	*new);
/*FILE: ft_init.c*/
t_all	*ft_init_t_all(int	*arr_num, int	nums);
t_all	*ft_init(int	*arr_num, int	nums);
/*FILE: ft_find.c*/
t_list	*ft_find_prev(t_list	*lst);
t_list	*ft_find_prev_prev(t_list	*lst);

/*command*/
void	pa(t_all	*all);
void	pb(t_all	*all);
void	ra(t_all	*all);
void	rb(t_all	*all);
void	rr(t_all	*all);
void	rra(t_all	*all);
void	rrb(t_all	*all);
void	rrr(t_all	*all);
void	sa(t_all	*all);
void	sb(t_all	*all);
void	ss(t_all	*all);
/*FILE: ft_sort.c*/
void	ft_sort(t_all	*all);
void	ft_sort_3(t_all	*all, t_list	*lst);
void	ft_sort_5(t_all	*all);
void	ft_find_min(t_all	*all, t_list	*lst, int	len);
int	ft_optimal_min(t_all	*all);
/*FILE: ft_sort_main.c*/
void	ft_sort_main(t_all	*all);
void	ft_start_sort(t_all	*all, int	len_a);
void	ft_sort_b(t_all	*all, int	len_b);
void	ft_last_b_sort(t_all	*all);
void	ft_add_flag(t_all	*all, t_list	**lst, int	flags);


# endif
