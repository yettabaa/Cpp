CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp randomChump.cpp newZombie.cpp Zombie.cpp

OFILES = $(FILES:.cpp=.o)

NAME = zombie

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)