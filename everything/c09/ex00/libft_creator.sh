# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftassada <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/28 19:44:29 by ftassada          #+#    #+#              #
#    Updated: 2021/02/28 20:59:47 by ftassada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
gcc -Wall -Werror -Wextra -c ./ft_putchar.c ./ft_swap.c ./ft_putstr.c ./ft_strlen.c ./ft_strcmp.c
ar rc libft.a ./ft_putchar.o ./ft_swap.o ./ft_putstr.o ./ft_strlen.o ./ft_strcmp.o
