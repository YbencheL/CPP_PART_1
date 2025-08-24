CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	phonebook.cpp contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: phonebook

phonebook: $(OBJ)
	$(CPP)  $(OBJ) -o phonebook

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f phonebook

re: fclean all

.SECONDARY: $(OBJS)

.PHONY: all fclean clean re