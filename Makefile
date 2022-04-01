##
## EPITECH PROJECT, 2021
## Makfile
## File description:
## makmak he
##

SRC =	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	infin

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) -L./lib/my/ -lmy
clean:
	rm -f $(OBJ)
	make clean -C lib/my
fclean: clean
	rm -f $(NAME)


re:	fclean all
