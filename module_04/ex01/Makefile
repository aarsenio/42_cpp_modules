SRC		=	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp \

OBJ		=	$(SRC:.cpp=.o)

NAME	=	animal

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