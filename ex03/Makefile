OBJ = AMateria.o Ice.o Cure.o  main.o Character.o ICharacter.o IMateriaSource.o MateriaSource.o

NAME = Polymorphism

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean re
#AMateria
#Ice
#Cure
#ICharacter
#Character
#IMateriaSource
#MateriaSource