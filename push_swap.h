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
# define ERROR1 "Error1\n"
# define ERROR2 "Error2\n"
# define ERROR3 "Error3\n"
# define ERROR4 "Error4\n"
# define ERROR5 "Error5\n"
# define ERROR6 "Error6\n"
# define ERROR7 "Error7\n"
# define ERROR8 "Error8\n"
# define ERROR9 "Error9\n"

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
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
# endif
