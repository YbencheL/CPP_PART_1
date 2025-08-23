CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp

OBJ = $(SRC:.cpp=.o)

all: replace

replace: $(OBJ)
	$(CPP)  $(OBJ) -o replace

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f replace

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re