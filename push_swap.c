#include "push_swap.h"

int	main(int argc, char	**argv)
{
	int	i;
	int	*arr_int;
	char	**arr_split;

	if (argc < 2)
		return (0);
	arr_int = ft_validation(argv);
	i = 0;

	while (i < ft_nums_count(argv))
	{
		printf("%d\n", arr_int[i]);
		i++;
	}

	/*TEST ft_putstr*/
	char	*str;

	str = "Bambuk\n";
	ft_putstr(str);
	/*TEST: ft_exit_error*/
		//ft_exit_error(ERROR);
	/*TEST: ft_exit_error_free_arr_num*/
		//int	*arr_num;

		//arr_num = (int *)malloc(10 * sizeof(int));
		//ft_exit_error_free_arr_num(ERROR, arr_num);
	/*TEST: ft_exit_error_free_arr_split*/
	//TO DO... file ft_exit.c
	
	/*TEST: ft_word_count*/
		//int	count = ft_word_count(str, ' ');
		//printf("test ft_count_word:\n%d\n", count);
	/*TEST: ft_isdigit*/
		//char	c = 'B';
		//char	i = '1';
		//printf("test ft_isdigit:\n'%c' is number? %d\n", c, ft_isdigit(c));
		//printf("'%c' is number? %d\n", i, ft_isdigit(i));
	/*TEST: ft_is_num*/
		//printf("test ft_is_num:\n");
		//ft_is_num(str);
	/*TEST: ft_nums_count*/
		//int nums = ft_nums_count(argv);
		//printf("test ft_nums_count:\n%d\n", nums);
	/*TEST: ft_validation*/
//	int	*arr_num;
//	int	i = 0;
//	arr_num = ft_validation(argv);
//	while (arr_num[i++])
//		printf("%d\n", arr_num[i]);
}
