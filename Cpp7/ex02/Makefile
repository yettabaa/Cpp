CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp

OFILES = $(FILES:.cpp=.o)

NAME = Array

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Array.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)