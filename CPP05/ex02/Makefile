NAME	:= ex02

SRCS	:= srcs/main.cpp srcs/Bureaucrat.cpp srcs/Form.cpp srcs/ShrubberyCreationForm.cpp srcs/RobotomyRequestForm.cpp srcs/PresidentialPardonForm.cpp

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
