CC = cc
INCLUDES = includes
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES)
NAME = libftprintf.a
M_SOURCES = srcs/ft_printf.c \
			srcs/ft_putchar.c \
			srcs/ft_putnbr_base.c \
			srcs/ft_putstr.c \
			srcs/ft_putnbr.c \
			srcs/ft_handle_format.c \
			srcs/ft_is_vaild_format.c \
			srcs/ft_strchr.c \
			srcs/ft_handle_pointer.c

OBJECTS = $(M_SOURCES:.c=.o)
RM = rm -f

$(NAME): $(OBJECTS)
	ar rc $@ $(OBJECTS)

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re