CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp

OFILES = $(FILES:.cpp=.o)

NAME = ex02

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(OFILES) -o $(NAME)
clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)