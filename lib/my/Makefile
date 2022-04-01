##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Mouhaaaaaa
##

NAME	= libmy

RM	= rm -f

SRC	= $(shell find . -type f -name '*.c')

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)
	ar rc libmy.a $(OBJ)
	cp my.h ../..
	cp libmy.a ../

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
