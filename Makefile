
CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES =  ft_printf.c ft_putadr.c ft_puthex.c ft_putnbr_unsigned.c ft_putnbr.c ft_putx.c ft_putstr.c ft_putchar.c

OBJ = $(FILES:.c=.o)
NAME = libftprintf.a

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	ar -rsc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re