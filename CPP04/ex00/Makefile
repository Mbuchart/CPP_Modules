NAME        = Animals

SRCS        = srcs/main.cpp srcs/Cat.cpp srcs/Dog.cpp srcs/Animal.cpp srcs/WrongCat.cpp srcs/WrongAnimal.cpp

CC		:= c++

FLAGS	:= -Wall -Wextra -Werror -std=c++98

RM		:= rm -rf

OBJS	:= $(SRCS:.cpp=.o)

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@
		echo './$@ generated'

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $^ -o $(NAME)
		echo './$(NAME) completed'

clean:
		$(RM) $(OBJS)
		echo './$(OBJS) deleted'

fclean: clean
		$(RM) $(NAME)
		echo './$(NAME) deleted'

re: fclean all

.PHONY	: all re clean fclean

