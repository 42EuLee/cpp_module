NAME	= Bureaucrat

SRC		= Bureaucrat.cpp main.cpp

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $@

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all fclean clean re
