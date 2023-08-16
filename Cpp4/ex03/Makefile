CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp #MateriaSource.cpp

OFILES = $(FILES:.cpp=.o)

NAME = a.out

all:	$(NAME)

$(NAME):	$(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)
		 
%.o: %.cpp AMateria.hpp Cure.hpp Ice.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re:fclean $(NAME)