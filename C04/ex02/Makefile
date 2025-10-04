CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

all: pure

pure: $(OBJ)
	$(CPP)  $(OBJ) -o pure

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f pure

re: fclean all

.SECONDARY:

.PHONY: all fclean clean re