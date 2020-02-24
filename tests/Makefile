##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## C Pool Bistro-matic
##

SRC		=	./test_[rule_name].c

OBJ		=	$(SRC:.c=.o)

NAME	=	unit-tests

CFLAGS	=	-Wall -Wextra -I./include -L./lib/my -lmy --coverage -lcriterion

DFLAGS	=	-ainsi -02 -pedantic -std=c99 -g

all:		$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(CFLAGS)

.PHONY: all clean fclean re gcovrt gcovrb

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

gcovrt:		$(NAME)
	gcovr --exclude tests/

gcovrb: 	$(NAME)
	gcovr --exclude tests/ --branches
