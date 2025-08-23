CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

all: harl

harl: $(OBJ)
	$(CPP)  $(OBJ) -o harl

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f harl

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re