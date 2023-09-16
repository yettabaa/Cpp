CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Serializer.cpp

OFILES = $(FILES:.cpp=.o)

NAME = Serializer

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Serializer.hpp Data.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)