##
## EPITECH PROJECT, 2021
## B-SYN-200-TLS-2-1-palindrome-roxane.baert
## File description:
## Makefile
##

CFLAGS	+=	-I../../include

SRC	=	my_str_isnum.c				\
		reverse_nb.c				\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a *.o

clean:
	rm -f *.tmp
	rm -f *.o
	rm -f *~
	rm -f $(NAME)

.PHONY:	$(NAME) clean