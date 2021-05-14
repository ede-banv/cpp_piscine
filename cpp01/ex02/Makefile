CC = clang++

C_FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Zombie.cpp ZombieEvent.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = Zombies

$(NAME): ${OBJS}
	${CC} ${C_FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all