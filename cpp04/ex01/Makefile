NAME	=	brain

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	./src/main.cpp \
			./src/Animal.cpp \
			./src/Cat.cpp \
			./src/Dog.cpp \
			./src/WrongAnimal.cpp \
			./src/WrongCat.cpp \
			./src/Brain.cpp
			

CC		=	g++

RM		=	rm -rf

all: $(NAME)

$(NAME):
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean : clean

re: fclean all

.PHONY: all clean fclean re