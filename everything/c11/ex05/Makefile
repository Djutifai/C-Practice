SRCS		=	./srcs/do-op.c ./srcs/ft_check_if_valid.c ./srcs/ft_atoi.c ./srcs/ft_fill_funarr.c \
			   	srcs/ft_make_magic.c srcs/ft_pls.c srcs/ft_min.c srcs/ft_mul.c srcs/ft_div.c \
				srcs/ft_putnbr.c srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_mod.c

INCLUDES	=	-include ./includes/header.h

FLAGS		=	-Wall -Werror -Wextra

OBJS		=	${SRCS:.c=.o}

NAME		=	do-op

.c.o:
				gcc ${FLAGS} -c $< -o ${<:.c=.o} ${INCLUDES}


all:			${NAME}
				
${NAME}:		${OBJS}
				gcc ${FLAGS} -o ${NAME} ${OBJS}

clean:			${OBJS}
				rm -rf ${OBJS}

fclean:			${NAME} clean
				rm -rf ${NAME}

re:				fclean all

.SILENT:
.PHONY:			all, clean, fclean, re
