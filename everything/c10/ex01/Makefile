SRCS		=	srcs/ft_cat.c  srcs/ft_strlen.c srcs/ft_display_file.c srcs/ft_strcmp.c \
			   	srcs/ft_display_error.c srcs/ft_readinput.c srcs/ft_putstr.c
				
INCLUDES	=	-include includes/header.h

NAME		=	ft_cat

OBJS		=	${SRCS:.c=.o}

FLAGS		=	-Wall -Werror -Wextra

.c.o:
				gcc ${FLAGS} -c $< -o ${<:.c=.o} ${INCLUDES}

all:			${NAME}


${NAME}: 		${OBJS}
				gcc ${FLAGS} -o ${NAME} ${OBJS}

clean:			${OBJS}
				rm -rf ${OBJS}

fclean: 		clean ${NAME}
				rm -rf ${NAME}

re:				fclean all

.PHONY:			all, clean, fclean, re
