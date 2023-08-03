CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Harl.cpp

OFILES = $(FILES:.cpp=.o)

NAME = harlFilter

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(CFLAG) $(OFILES) -o $(NAME)
		 
%.o: %.cpp Harl.hpp
	$(CC) $(CFLAG) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)