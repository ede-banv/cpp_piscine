CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = megaphone


$(NAME): ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all