CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

NAME= BocalFantasy

SRCS = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJS = ${SRCS:.cpp=.o}

$(NAME): ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all