SRC		=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \

OBJ		=	$(SRC:.cpp=.o)

NAME	=	Scavtrap

CC		=	g++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I. -g -fsanitize=address

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o:	%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re