NAME	=	interface

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	./src/AMateria.cpp \
			./src/Character.cpp \
			./src/Cure.cpp \
			./src/Ice.cpp \
			./src/MateriaSource.cpp \
			./src/main.cpp

OBJ = $(SRC:.cpp=.o)

CC		=	c++

RM		=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
