CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp

OBJ = $(SRC:.cpp=.o)

all: strin

strin: $(OBJ)
	$(CPP)  $(OBJ) -o strin

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f strin

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re