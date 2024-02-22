NAME	=	animal

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	./src/main.cpp \
			./src/Animal.cpp \
			./src/Cat.cpp \
			./src/WrongCat.cpp \
			./src/Dog.cpp \
			./src/WrongAnimal.cpp \


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
