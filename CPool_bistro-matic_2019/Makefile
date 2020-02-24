##
## EPITECH PROJECT, 2019
## 
## File description:
## Makefile
##

SRC	=	main.c

NAME	=	calc

CFLAGS	+=	-I./include -L./lib -lmy -Wall -Wextra -g

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/my
		gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
