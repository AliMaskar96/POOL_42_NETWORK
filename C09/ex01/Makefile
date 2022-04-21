# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 18:35:48 by aait-mas          #+#    #+#              #
#    Updated: 2022/04/21 06:08:24 by aait-mas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= srcs/ft_putchar.c \
		  srcs/ft_swap.c \
		  srcs/ft_putstr.c \
		  srcs/ft_strlen.c \
		  srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

INCS	= includes

FLGS	= -Wall -Wextra -Werror


all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

.c.o:
			gcc ${FLGS} -c $< -o ${<:.c=.o} -I ${INCS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
