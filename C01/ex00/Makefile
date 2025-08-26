CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all: Brainz

Brainz: $(OBJ)
	$(CPP)  $(OBJ) -o Brainz

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f Brainz

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re