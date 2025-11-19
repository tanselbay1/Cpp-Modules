NAME        = Animal

CC          = c++
CFLAGS      = -Wall -Wextra -Werror -std=c++98

SRCS        = main.cpp \
              Animal.cpp \
              Dog.cpp \
              Cat.cpp \
              WrongAnimal.cpp \
              WrongCat.cpp \
			  Brain.cpp

OBJS        = $(SRCS:.cpp=.o)

RM          = rm -f

# Colors for pretty output (Optional but nice)
GREEN       = \033[0;32m
RESET       = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Compiling $(NAME)...$(RESET)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Done! Executable is ./$(NAME)$(RESET)"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning objects..."
	$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning executable..."
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
