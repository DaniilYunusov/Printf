NAME	=	libftprintf.a

SRCS	=	ft_conv_proc.c	ft_printf.c	ft_putchar.c ft_putdec.c ft_putlowhex.c\
			ft_putptr.c		ft_putstr.c	ft_putudec.c ft_strlen.c ft_putupphex.c

CC		=	gcc

HEADER	=	ft_printf.h

OBJS	=	${SRCS:.c=.o}

FLAGS	=	-Wall -Wextra -Werror

%.o		: 	%.c ${HEADER}
			${CC} ${FLAGS} -c $< -o $@

${NAME}	:	${OBJS} ${HEADER}
			ar rcs ${NAME} $?

all		:	${NAME}

clean	:
			rm -f ${OBJS}

fclean	:	clean
			rm -f ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re
