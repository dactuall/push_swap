NAME	= bambuk_swap

SRCS	= push_swap.c			ft_putstr.c \
	  ft_exit.c			ft_validation.c \
	  ft_atoi_free_all_arr.c 	ft_split.c \
	  ft_substr.c			
	#ft_exit.c	validation.c 
	
OBJ	= $(SRCS:%.c=%.o)

#FLAGS	= -Wall -Wextra -Werror

.PHONY	: all clean fclean re 

all	:	$(NAME)

%.o	:	%.c
		@gcc $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
	  	@gcc $(FLAGS) -o $(NAME) $(OBJ)

clean	:
		@rm -f $(OBJ)

fclean	:	clean
		@rm -f $(NAME)

re	:	fclean all
