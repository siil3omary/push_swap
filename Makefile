#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := push_swap
BNAME        := checker
CC        := cc
FLAGS    := -Wall -Wextra -Werror -fsanitize=address
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      srcs/indexit.c \
                          srcs/lib/ft_atoi.c \
                          srcs/lib/ft_isdigit.c \
                          srcs/lib/ft_putchar_fd.c \
                          srcs/lib/ft_putendl_fd.c \
                          srcs/lib/ft_putnbr_fd.c \
                          srcs/lib/ft_putstr_fd.c \
                          srcs/lib/ft_split.c \
							srcs/lib/ft_strjoin.c \
							srcs/lib/ft_strlcpy.c \
                          srcs/lib/ft_strdup.c \
                          srcs/lib/ft_strlen.c \
                          srcs/lib/ft_strncmp.c \
                          srcs/list_utils.c \
                          srcs/operations/pa.c \
                          srcs/operations/pb.c \
                          srcs/operations/ra.c \
                          srcs/operations/rb.c \
                          srcs/operations/rr.c \
                          srcs/operations/rra.c \
                          srcs/operations/rrb.c \
                          srcs/operations/rrr.c \
                          srcs/operations/sa.c \
                          srcs/operations/sb.c \
                          srcs/operations/ss.c \
                          srcs/parcing.c \
                          srcs/pushswap.c \
                          srcs/send_to_a.c \
                          srcs/send_to_b.c \
                          srcs/sort.c \
                          srcs/sort3.c \
                          srcs/sort4.c \
                          srcs/sort5.c \
                          srcs/utils.c \

BSRCS       :=          srcs_bonus/operations/pa.c \
                          srcs_bonus/operations/pb.c \
                          srcs_bonus/operations/ra.c \
                          srcs_bonus/operations/rb.c \
                          srcs_bonus/operations/rr.c \
                          srcs_bonus/operations/rra.c \
                          srcs_bonus/operations/rrb.c \
                          srcs_bonus/operations/rrr.c \
                          srcs_bonus/operations/sa.c \
                          srcs_bonus/operations/sb.c \
                          srcs_bonus/operations/ss.c \
                          srcs_bonus/lib/ft_atoi.c \
                          srcs_bonus/lib/ft_isdigit.c \
                          srcs_bonus/lib/ft_putchar_fd.c \
                          srcs_bonus/lib/ft_putendl_fd.c \
                          srcs_bonus/lib/ft_putnbr_fd.c \
                          srcs_bonus/lib/ft_putstr_fd.c \
                          srcs_bonus/lib/ft_split.c \
                          srcs_bonus/lib/ft_strjoin.c \
                          srcs_bonus/lib/ft_strlcpy.c \
                          srcs_bonus/lib/ft_strlen.c \
                          srcs_bonus/lib/ft_strncmp.c \
                          srcs_bonus/lib/ft_strdup.c \
                          srcs_bonus/lib/ft_substr.c \
						  srcs_bonus/gnl/get_next_line.c \
                          srcs_bonus/stack_utils.c \
                          srcs_bonus/checker_bonus.c \


                          
OBJS        := $(SRCS:.c=.o)
BOBJS       := $(BSRCS:.c=.o)

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

${BNAME}:   ${BOBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(BNAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${BNAME} ${BOBJS}
			@echo "$(GREEN)$(BNAME) created[0m ✔️"
all:		${NAME}

bonus:      ${BNAME}

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME} ${BNAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re


