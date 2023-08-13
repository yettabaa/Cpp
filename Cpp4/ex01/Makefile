CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OFILES = $(FILES:.cpp=.o)

NAME = a.out

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)