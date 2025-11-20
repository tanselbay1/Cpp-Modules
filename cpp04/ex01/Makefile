# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Executable name
NAME = Animal

# Source files
SRCS        = main.cpp \
              Animal.cpp \
              Dog.cpp \
              Cat.cpp \
              WrongAnimal.cpp \
              WrongCat.cpp \
			  Brain.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Header files
DEPS =		Animal.hpp \
            Dog.hpp \
            Cat.hpp \
            WrongAnimal.hpp \
            WrongCat.hpp \
			Brain.hpp

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