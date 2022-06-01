SRCS 		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INCLUDES 	= includes/ft.h
OBJECTS 	= ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
CC 			= gcc
RM 			= rm -f
CFLAGS 		= -Wall -Wextra -Werror

all: libft.a

libft.a:
	${CC} ${CFLAGS} -c ${SRCS} -I ${INCLUDES}
	ar rc libft.a ${OBJECTS}
	ranlib libft.a
clean:
	${RM} ${OBJECTS}
fclean: clean
	${RM} libft.a
re: fclean all
