NAME = phonebook

OBJS = main.o contact.o phonebook.o

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = contact.cpp main.cpp phonebook.cpp

HEADERS = contact.hpp phonebook.hpp

all : $(NAME)

%.o : %.cpp 
	c++ $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(SRCS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@echo "delete $(OBJS)"
	@rm -rf $(OBJS)

fclean: clean
	@echo "delete $(NAME)"
	@rm -rf $(NAME)

re: fclean all