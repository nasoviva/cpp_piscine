NAME = karen

LIST = Karen.cpp main.cpp

LIST_H = Karen.hpp

OBJ = $(LIST:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Makefile $(LIST_H)
		c++ $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re