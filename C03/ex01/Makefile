CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: ScavTrap

ScavTrap: $(OBJ)
	$(CPP)  $(OBJ) -o ScavTrap

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f ScavTrap

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re