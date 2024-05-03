NAME= libftprintf.a
GCC= cc
FLAGS= -Wall -Werror -Wextra

SRC= ft_printf.c\
	 ft_print_charact.c\
	 ft_print_string.c\
	 ft_print_pointer.c\
	 ft_print_int.c\
	 ft_print_unsi.c\
	 ft_print_hex.c\

all: ${NAME}

OBJ= ${SRC:.c=.o}

${NAME}: ${SRC}
	${GCC} ${FLAGS} -c ${SRC}
	ar rcs ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: re fclean clean all
