CC = c++

NAME := Array

CPPFLAGS := -Wall -Wextra -Werror -std=c++98 -g

SRCS := main.cpp

OBJS := ${SRCS:.cpp=.o}

OBJDIR := $(addprefix obj/, $(OBJS))

INCLUDES := Array.hpp Array.tpp

INCDIR := $(addprefix includes/, $(INCLUDES))

all : $(NAME)

$(NAME) : $(OBJDIR)
	echo "\x1b[34m $1[Compiling $(NAME)]\x1b[0m"
	$(CC) $(OBJDIR) -o $(NAME) $(CPPFLAGS)
	echo "\x1b[34m $1[Done]\x1b[0m"

obj/%.o : src/%.cpp $(INCDIR) Makefile
	mkdir -p obj
	$(CC) -c $< -I includes $(CPPFLAGS) -o $@

clean :
	$(RM) $(OBJDIR)

fclean : clean
	$(RM) $(NAME) 

re : fclean all

.PHONY : all clean fclean re
.SILENT:
