CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp

OFILES = $(FILES:.cpp=.o)

NAME = easyfind

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp easyfind.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)