# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Executable name
NAME = harl

# Source files
SRCS = main.cpp Harl.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Header files
DEPS = Harl.hpp

# Default rule
all: $(NAME)

# Link rule
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Compile rule
# %.o depends on its .cpp and the .hpp
%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rules
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re