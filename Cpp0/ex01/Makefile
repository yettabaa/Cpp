CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

FILE = phonebook.cpp utils.cpp

OFILE = $(FILE:.c=.o)

NAME = phonebook

all:	$(NAME)

$(NAME):	$(OFILE)
		$(CC) $(CFLAG) $(OFILE) -o $(NAME)

clean:
	rm -f $(NAME)