CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

FILES = main.cpp PmergeMe.cpp Vector.cpp Deque.cpp

OFILES = $(FILES:.cpp=.o)

NAME = PmergeMe

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp PmergeMe.hpp Vector.hpp Deque.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)