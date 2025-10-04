CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)

all: poly

poly: $(OBJ)
	$(CPP)  $(OBJ) -o poly

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f poly

re: fclean all

.SECONDARY:

.PHONY: all fclean clean re