CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

FILE = megaphone.cpp

OFILE = $(FILE:.c=.o)

NAME = Megaphone

all:	$(NAME)

$(NAME): $(OFILE)
		$(CC) $(CFLAG) $(FILE) -o $(NAME)

clean:
	rm -f $(NAME)		