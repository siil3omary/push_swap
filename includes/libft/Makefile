# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 17:44:06 by aelomari          #+#    #+#              #
#    Updated: 2024/01/01 20:15:24 by aelomari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libft.a

CC	= cc

CFLAGS	= -Wall -Werror -Wextra 

ARCHIVE	= ar -rc

SRCS	=    ft_bzero.c  ft_isalnum.c\
			 ft_isalpha.c ft_isascii.c\
			 ft_isdigit.c ft_isprint.c\
			 ft_memset.c  ft_strlen.c\
			 ft_memcpy.c ft_strlcpy.c\
			 ft_strlcat.c ft_toupper.c\
			 ft_tolower.c ft_strchr.c\
			 ft_strncmp.c ft_memchr.c\
			 ft_strrchr.c ft_memcmp.c\
			 ft_memmove.c ft_substr.c\
			 ft_strnstr.c ft_calloc.c\
			 ft_strdup.c ft_atoi.c\
			 ft_strjoin.c ft_putchar_fd.c\
			 ft_putstr_fd.c ft_putendl_fd.c\
			 ft_itoa.c ft_split.c\
			 ft_putnbr_fd.c ft_strmapi.c\
			 ft_striteri.c ft_strtrim.c\


OBJS	= $(SRCS:.c=.o)


B_SRCS	=	ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
			ft_lstadd_front_bonus.c ft_lstnew_bonus.c\
			ft_lstsize_bonus.c ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\


B_OBJS	= $(B_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)


clean:
	rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	rm -rf $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $<
	$(ARCHIVE) $(NAME) $@

bonus: $(B_OBJS)

rebonus: fclean bonus

re: fclean all

.PHONY: all clean fclean re