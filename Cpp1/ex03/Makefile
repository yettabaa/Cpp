CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OFILES = $(FILES:.cpp=.o)

NAME = ex03

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)