CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: FragTrap

FragTrap: $(OBJ)
	$(CPP)  $(OBJ) -o FragTrap

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f FragTrap

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re