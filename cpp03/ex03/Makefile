CC = c++

NAME := DiamondTrap

CPPFLAGS := -Wall -Wextra -Werror -std=c++98 -Wshadow

SRCS := main.cpp ClapTrap.cpp  ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS := ${SRCS:.cpp=.o}

OBJDIR := $(addprefix obj/, $(OBJS))

INCLUDES := includes/ClapTrap.hpp includes/ScavTrap.hpp\
			includes/FragTrap.hpp includes/DiamondTrap.hpp

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
