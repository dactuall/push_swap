NAME	= bambuk_swap

SRCS	=	push_swap.c		ft_validation.c		ft_init.c \
			./utils/ft_atoi_utils.c 	./utils/ft_atoi.c \
			./utils/ft_exit.c	./utils/ft_split_utils.c	./utils/ft_split.c \
			./lists/ft_list.c	./lists/ft_find.c \
			./command/pa.c	./command/pb.c	./command/ra.c \
			./command/rb.c	./command/rr.c	./command/rra.c \
			./command/rrb.c	./command/rrr.c	./command/sa.c \
			./command/sb.c	./command/ss.c \
			./sort/ft_sort.c	./sort/ft_sort_main.c \
			./sort/ft_sort_main_utils.c	
		  

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
