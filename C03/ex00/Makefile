CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: ClapTrap

ClapTrap: $(OBJ)
	$(CPP)  $(OBJ) -o ClapTrap

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f ClapTrap

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re