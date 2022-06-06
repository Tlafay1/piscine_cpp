CC = c++

NAME := BraiiiiiiinnnzzzZ

CPPFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS := ${SRCS:.cpp=.o}

OBJDIR := $(addprefix obj/, $(OBJS))

INCLUDES := includes/Zombie.hpp

all : $(NAME)

$(NAME) : $(OBJDIR)
	echo "\x1b[34m $1[Compiling $(NAME)]\x1b[0m"
	$(CC) $(OBJDIR) -o $(NAME) $(CPPFLAGS)
	echo "\x1b[34m $1[Done]\x1b[0m"

obj/%.o : src/%.cpp $(INCLUDES) Makefile
	mkdir -p obj
	$(CC) -c $< -I includes $(CFLAGS) -o $@

clean :
	$(RM) $(OBJDIR)

fclean : clean
	$(RM) $(NAME) 

re : fclean all

.PHONY : all clean fclean re
.SILENT:
