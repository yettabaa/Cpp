CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp replace.cpp

OFILES = $(FILES:.cpp=.o)

NAME = ex04

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp replace.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)