CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Zombie.cpp ZombieEvent.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = Zombies

$(NAME): ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all