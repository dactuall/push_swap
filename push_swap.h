#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
# define ERROR "ErrorExit\n"

typedef	struct	s_list
{
	int		index;
	int		flag;
	struct s_list	*next;
}	t_list;

typedef	struct	s_all
{
	t_list		*a;
	t_list		*b;
	int		len_a;
	int		len_b;
	int		max;
	int		mid;
	int		min;
	int		flags;
	struct	s_all	*next;
}	t_all;

/*FILE: ft_putstr.c*/
void	ft_putstr(char	*str);

/*FILE: ft_exit.c*/
int	ft_exit_error(char	*error);
char	**ft_free_arr_split(char	**arr_split, int size);
int	ft_free_s_pointer(char	**arr_split);
int	ft_exit_error_free_arr_num_s_pointer(int	*arr_num, char	**arr_split);

/*FILE: ft_validation.c*/
int	*ft_validation(char	**argv);
int	ft_word_count(char	*argv, char c);
int	ft_nums_count(char	**argv);
int	ft_isdigit(char	c);
int	ft_is_space_tab_sign(char	c);
void	ft_is_num(char	*str);
void	ft_check_dup(int	*arr_num, int	nums);
void	ft_check_sort(int	*arr_num, int	nums);


/*FILE: ft_atoi_free_all_arr.c*/
int	ft_atoi(const char	*str, int	*arr_num, char	**arr_split);

/*FILE ft_substr.c*/
char	*ft_substr(char *s, unsigned int	start, int	len);

/*FILE ft_split.c*/
char	**ft_split(char *s, char	c);

#endif
