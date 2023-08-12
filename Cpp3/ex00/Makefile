CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

FILES = main.cpp ClapTrap.cpp

OFILES = $(FILES:.cpp=.o)

NAME = ex00

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp ClapTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)