CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

NAME =

SRCS =

OBJS = ${SRCS:.c=.o}

$(NAME):	${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
	rm -rf ${SRCS}

fclean:		clean
	rm -rf ${NAME}

re:			fclean all