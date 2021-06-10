CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = Identify

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJS = ${SRCS:.cpp=.o}

$(NAME):	${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
	rm -rf ${OBJS}

fclean:		clean
	rm -rf ${NAME}

re:			fclean all