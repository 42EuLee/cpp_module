NAME	= account

SRC		= Account.cpp

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM		= rm -rf

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) test.cpp -o $@

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

test: re
	$(re) ./${NAME}

.PHONY: all fclean clean re