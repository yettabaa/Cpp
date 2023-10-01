CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

FILES = main.cpp RPN.cpp

OFILES = $(FILES:.cpp=.o)

NAME = RPN

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp RPN.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)