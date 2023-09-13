CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp ScalarConverter.cpp 

OFILES = $(FILES:.cpp=.o)

NAME = convert

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp ScalarConverter.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)