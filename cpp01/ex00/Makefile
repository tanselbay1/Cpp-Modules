# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Executable name
NAME = zombie

# Source files
SRCS = main.cpp \
       Zombie.cpp \
       newZombie.cpp \
       randomChump.cpp

# Object files (derived from source files)
OBJS = $(SRCS:.cpp=.o)

# Default rule: build the executable
all: $(NAME)

# Rule to link the object files into the final executable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Rule to compile .cpp files into .o files
%.o: %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up object files
clean:
	rm -f $(OBJS)

# Rule to clean up object files and the executable
fclean: clean
	rm -f $(NAME)

# Rule to re-compile the project from scratch
re: fclean all

# Phony targets are not actual files
.PHONY: all clean fclean re