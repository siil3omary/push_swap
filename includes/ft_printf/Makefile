NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = srcs/ft_print_c.c \
      srcs/ft_print_s.c \
      srcs/ft_print_d.c \
      srcs/ft_print_p.c \
      srcs/ft_print_u.c \
      srcs/ft_print_x.c \
      srcs/ft_print_xx.c \
      srcs/ft_strchr.c \
      ft_printf.c

RM =	rm -f
OBJ =	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	ar rc	$(NAME)	$(OBJ)
	

%.o:	%.c
	$(CC)	$(CFLAGS)	-I.	-o	$@	-c	$?

all:	$(NAME)

clean:
	$(RM)	$(OBJ)

fclean:	clean
	$(RM)	$(NAME)

re:	fclean all
