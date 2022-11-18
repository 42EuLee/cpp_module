NAME	= Form

SRC		= Bureaucrat.cpp main.cpp Form.cpp

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM		= rm -rf

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all fclean clean re
