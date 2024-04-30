#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := push_swap
CC        := cc
FLAGS    :=   # -g -fsanitize=address  #-Wall -Wextra -Werror
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      srcs/list_utils.c \
                          srcs/operations/pa.c \
                          srcs/operations/rr.c \
                          srcs/operations/rrb.c \
                          srcs/operations/pb.c \
                          srcs/operations/rra.c \
                          srcs/operations/rb.c \
                          srcs/operations/rrr.c \
                          srcs/operations/sb.c \
                          srcs/operations/ra.c \
                          srcs/operations/ss.c \
                          srcs/operations/sa.c \
                          srcs/lib/ft_strnstr.c \
                          srcs/lib/ft_isdigit.c \
                          srcs/lib/ft_putstr_fd.c \
                          srcs/lib/ft_strlcpy.c \
                          srcs/lib/ft_strlen.c \
                          srcs/lib/ft_memcmp.c \
                          srcs/lib/ft_putnbr_fd.c \
                          srcs/lib/ft_strchr.c \
                          srcs/lib/ft_striteri.c \
                          srcs/lib/ft_bzero.c \
                          srcs/lib/ft_strjoin.c \
                          srcs/lib/ft_isascii.c \
                          srcs/lib/ft_memcpy.c \
                          srcs/lib/ft_isprint.c \
                          srcs/lib/ft_putendl_fd.c \
                          srcs/lib/ft_toupper.c \
                          srcs/lib/ft_split.c \
                          srcs/lib/ft_strrchr.c \
                          srcs/lib/ft_isalpha.c \
                          srcs/lib/ft_memchr.c \
                          srcs/lib/ft_putchar_fd.c \
                          srcs/lib/ft_memset.c \
                          srcs/lib/ft_substr.c \
                          srcs/lib/ft_strncmp.c \
                          srcs/lib/ft_strmapi.c \
                          srcs/lib/ft_strtrim.c \
                          srcs/lib/ft_memmove.c \
                          srcs/lib/ft_strlcat.c \
                          srcs/lib/ft_calloc.c \
                          srcs/lib/ft_strdup.c \
                          srcs/lib/ft_atoi.c \
                          srcs/lib/ft_isalnum.c \
                          srcs/lib/ft_itoa.c \
                          srcs/lib/ft_tolower.c \
                          srcs/pushswap.c \
                          srcs/send_to_b.c \
                          srcs/send_to_a.c \
                          
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re


