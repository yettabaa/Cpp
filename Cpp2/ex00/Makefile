CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = megaphone.cpp

OFILES = $(FILES:.cpp=.o)

NAME = megaphone

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)

%.o:%.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)