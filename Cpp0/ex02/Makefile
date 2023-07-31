CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

FILES = Account.cpp tests.cpp

OFILES = $(FILES:.c=.o)

NAME = jod

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(CFLAG) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)


