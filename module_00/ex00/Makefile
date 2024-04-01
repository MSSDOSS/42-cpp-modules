NAME = megaphone

OBJS = megaphone.o

SRCS = megaphone.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

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