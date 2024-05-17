CC = cc
INCLUDES = includes
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES)
NAME = libftprintf.a
M_SOURCES = 
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