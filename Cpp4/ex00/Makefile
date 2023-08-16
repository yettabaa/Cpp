CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OFILES = $(FILES:.cpp=.o)

NAME = a.out

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)