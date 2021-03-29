SRCS	=	./ft_display_file.c

NAME	=	ft_display_file

OBJS	=	${SRCS:.c=.o}

FLAGS	=	-Wall -Wextra -Werror

.c.o:
			gcc	${FLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}


${NAME}:	${OBJS}
			gcc ${FLAGS} -o ${NAME} ${OBJS}

clean:		${OBJS}
			rm -rf ${OBJS}

fclean:		clean ${NAME}
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all, clean, fclean, re
