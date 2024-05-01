NAME = libft.a
SRC = ./srcs/
HEADER = ./includes/libft.h
FLAGS = -Wall -Wextra -Werror
OPTION = -c $(HEADER)
FILES = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c $(SRC)ft_strlen.c $(SRC)ft_swap.c
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTION) $(FILES)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re