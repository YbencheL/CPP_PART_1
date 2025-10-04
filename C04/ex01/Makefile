CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

all: abst

abst: $(OBJ)
	$(CPP)  $(OBJ) -o abst

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f abst

re: fclean all

.SECONDARY:

.PHONY: all fclean clean re