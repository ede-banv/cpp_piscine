CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Pony.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = Ponies

$(NAME): ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all