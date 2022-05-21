NAME	= bambuk_swap

SRCS	= push_swap.c		ft_validation.c \		
		  ./utils/ft_atoi.c	./utils/ft_atoi_logic \
		  ./utils/ft_exit.c	./utils/ft_split_utils.c	./utils/ft_split.c \

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