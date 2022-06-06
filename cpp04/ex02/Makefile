CC = c++

NAME := AbstractAnimal

CPPFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp Dog.cpp Cat.cpp AAnimal.cpp WrongAnimal.cpp WrongCat.cpp\
		Brain.cpp

OBJS := ${SRCS:.cpp=.o}

OBJDIR := $(addprefix obj/, $(OBJS))

INCLUDES := includes/Dog.hpp includes/Cat.hpp includes/AAnimal.hpp\
			includes/WrongCat.hpp includes/WrongAnimal.hpp includes/Brain.hpp

all : $(NAME)

$(NAME) : $(OBJDIR)
	echo "\x1b[34m $1[Compiling $(NAME)]\x1b[0m"
	$(CC) $(OBJDIR) -o $(NAME) $(CPPFLAGS)
	echo "\x1b[34m $1[Done]\x1b[0m"

obj/%.o : src/%.cpp $(INCLUDES) Makefile
	mkdir -p obj
	$(CC) -c $< -I includes $(CPPFLAGS) -o $@

clean :
	$(RM) $(OBJDIR)

fclean : clean
	$(RM) $(NAME) 

re : fclean all

.PHONY : all clean fclean re
.SILENT:
