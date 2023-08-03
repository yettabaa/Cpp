CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp randomChump.cpp newZombie.cpp Zombie.cpp

OFILES = $(FILES:.cpp=.o)

NAME = zombie

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Zombie.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)