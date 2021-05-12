CC = clang++

C_FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp annuaire.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = PhoneBook

$(NAME): ${OBJS}
	${CC} ${C_FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all