NAME	= bambuk_swap

SRCS	=	  ./utils/ft_atoi_utils.c 	./utils/ft_atoi.c \
		  ./utils/ft_exit.c	./utils/ft_split_utils.c	./utils/ft_split.c \
		  ft_validation.c	push_swap.c

OBJ	= $(SRCS:%.c=%.o)

FLAGS	= -Wall -Wextra -Werror

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
