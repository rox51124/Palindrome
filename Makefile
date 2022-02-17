##
## EPITECH PROJECT, 2021
## synthese
## File description:
## Makefile
##

SRC =	main.c				\
		src/rules.c			\
		src/error.c			\
		src/structure.c		\
		src/print_dash.c	\
		src/palindrome.c	\
		src/function_p.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	palindrome

all:	$(NAME)

CFLAGS += -I include

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(OBJ) -L ./lib/my -lmy

clean:
	rm -f $(OBJ)
	make clean -C ./lib/my

fclean:	clean
	rm -f $(NAME)
	make clean -C ./lib/my

re:	fclean all

.PHONY:	NAME all $(NAME) clean fclean re