CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp PhoneBook.cpp Contact.cpp utils.cpp 

OFILES = $(FILES:.cpp=.o)

NAME = phonebook

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp PhoneBook.hpp Contact.hpp utils.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)