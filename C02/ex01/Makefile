CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	Fixed.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: fixed

fixed: $(OBJ)
	$(CPP) $(OBJ) -o fixed

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f fixed

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re