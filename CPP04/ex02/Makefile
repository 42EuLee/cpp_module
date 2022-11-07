NAME	= AAnimal

SRC		= Brain.cpp AAnimal.cpp Cat.cpp Dog.cpp main.cpp

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM		= rm -rf

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $@

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all fclean clean re
