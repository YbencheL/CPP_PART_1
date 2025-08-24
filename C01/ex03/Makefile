CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

all: Weapon

Weapon: $(OBJ)
	$(CPP)  $(OBJ) -o Weapon

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f Weapon

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re