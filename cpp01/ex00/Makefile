CC = clang++

C_FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Pony.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = Ponies

$(NAME): ${OBJS}
	${CC} ${C_FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all