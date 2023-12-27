NAME	=	myLove

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	./src/Main.cpp \
			./src/ClapTrap.cpp \
			./src/ScavTrap.cpp \

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