CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address

NAME = Serialize

SRCS = main.cpp Data.cpp serialize.cpp deserialize.cpp

OBJS = ${SRCS:.cpp=.o}

$(NAME):	${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
	rm -rf ${OBJS}

fclean:		clean
	rm -rf ${NAME}

re:			fclean all