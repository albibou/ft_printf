SRCS	= ft_printf.c ft_utils.c ft_typec.c ft_typedi.c ft_typep.c ft_types.c ft_typeu.c ft_typex.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

RM = rm -f

AR = ar rc

CC = gcc

CFLAGS = -Wall -Wextra -Werror

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

all :		${NAME}

clean :
		${RM} ${OBJS} ${BONUSOBJS}

fclean :	clean
		${RM} ${NAME}

re :		fclean all

.PHONY :	all clean fclean re
