CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

FILES = Account.cpp tests.cpp

OFILES = $(FILES:.cpp=.o)

NAME = jod

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(CFLAG) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Account.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)


