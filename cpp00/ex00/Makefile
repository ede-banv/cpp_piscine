CC = clang++

C_FLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = megaphone

$(NAME): ${OBJS}
	${CC} ${C_FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all