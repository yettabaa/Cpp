CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OFILES = $(FILES:.cpp=.o)

NAME = ex03

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Weapon.hpp HumanA.cpp HumanB.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)