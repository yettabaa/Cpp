CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = megaphone.cpp

OFILES = $(FILES:.cpp=.o)

NAME = Megaphone

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(CFLAG) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)