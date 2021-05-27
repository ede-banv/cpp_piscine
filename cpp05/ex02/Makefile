CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

NAME= Bureaucrats

SRCS = main.cpp Bureaucrat.cpp Form.cpp

OBJS = ${SRCS:.cpp=.o}

$(NAME): ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all