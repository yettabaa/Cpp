CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Account.cpp tests.cpp

OFILES = $(FILES:.cpp=.o)

NAME = account

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Account.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)


