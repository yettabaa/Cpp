CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OFILES = $(FILES:.cpp=.o)

NAME = ex02

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)