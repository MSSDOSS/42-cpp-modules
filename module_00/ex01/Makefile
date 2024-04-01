NAME = phonebook


CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = $(wildcard *.cpp)
HEADER = $(wildcard *.hpp)


OBJS = main.o
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