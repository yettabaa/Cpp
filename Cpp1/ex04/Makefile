CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp

OFILES = $(FILES:.cpp=.o)

NAME = ex04

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(CFLAG) $(OFILES) -o $(NAME)
		 
%.o: %.cpp replace.h
	$(CC) $(CFLAG) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)