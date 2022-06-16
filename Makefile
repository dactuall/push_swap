NAME	= push_swap
NAME_B  = checker
SRCS	=	push_swap.c		ft_validation.c		ft_init.c \
			./utils/ft_atoi_utils.c 	./utils/ft_atoi.c \
			./utils/ft_exit.c	./utils/ft_split_utils.c	./utils/ft_split.c \
			./lists/ft_list.c	./lists/ft_find.c \
			./command/pa.c	./command/pb.c	./command/ra.c \
			./command/rb.c	./command/rr.c	./command/rra.c \
			./command/rrb.c	./command/rrr.c	./command/sa.c \
			./command/sb.c	./command/ss.c \
			./sort/ft_sort.c	./sort/ft_sort_main.c \
			./sort/ft_sort_main_utils.c \
		  
SRCS_B	=	checker.c ft_validation.c		ft_init.c \
			./utils/ft_atoi_utils.c 	./utils/ft_atoi.c \
			./utils/ft_exit.c	./utils/ft_split_utils.c	./utils/ft_split.c \
			./lists/ft_list.c	./lists/ft_find.c \
			./command/pa.c	./command/pb.c	./command/ra.c \
			./command/rb.c	./command/rr.c	./command/rra.c \
			./command/rrb.c	./command/rrr.c	./command/sa.c \
			./command/sb.c	./command/ss.c \
			./gnl/get_next_line.c 	./gnl/get_next_line_utils.c

OBJ	= $(SRCS:%.c=%.o)

OBJ_B	= $(SRCS_B:%.c=%.o)

FLAGS	= -Wall -Wextra -Werror

.PHONY	: all bonus clean fclean re 

all	:	$(NAME)

%.o	:	%.c
		@gcc $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
	  	@gcc $(FLAGS) -o $(NAME) $(OBJ)

bonus	:	$(OBJ_B)
		@gcc $(FLAGS) -o $(NAME_B) $(OBJ_B)

clean	:
		@rm -f $(OBJ) $(OBJ_B)

fclean	:	clean
		@rm -f $(NAME) $(NAME_B)

re	:	fclean all
