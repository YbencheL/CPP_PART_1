CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: megaphone

megaphone: $(OBJ)
	$(CPP)  $(OBJ) -o megaphone

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f megaphone

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re