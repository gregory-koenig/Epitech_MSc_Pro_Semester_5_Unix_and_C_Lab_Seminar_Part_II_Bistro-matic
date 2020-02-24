##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## C Pool Bistro-matic
##

SRC			=	./main.c

OBJ			=	$(SRC:.c=.o)

NAME		=	calc

CFLAGS		+=	-Wall -Wextra -I./include -L./lib/my -lmy

DFLAGS		=	-ainsi -02 -pedantic -std=c99 -g 

all:		$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

.PHONY: all clean fclean re tests_run

clean:
	rm -rf $(OBJ)
	rm -rf *~

fclean:		clean
	make -C lib/my
	rm -rf $(NAME)

re:			fclean all

tests_run:
    make -C tests/[rule_name]
