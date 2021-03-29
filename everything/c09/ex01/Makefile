SRCS	=		./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_swap.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

HEAD	=		./includes/ft.h

FLAGS	=		-Wall -Wextra -Werror

OBJS	=		${SRCS:.c=.o}

LIBNAME	=		libft.a

MKLIB	=		ar rc

.c.o:
				gcc ${FLAGS} -c $< -o ${<:.c=.o} 

all:			libft.a


libft.a:		${OBJS}	
				${MKLIB} ${LIBNAME} ${OBJS} ${HEAD}

clean:			${OBJS}
				rm -rf ${OBJS}

fclean:			clean ${LIBNAME}
				rm -rf ${LIBNAME}

re:				fclean all

.PHONY:			all, clean, fclean, re
