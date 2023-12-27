NAME	=	fragTrap

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	./src/main.cpp \
			./src/ClapTrap.cpp \
			./src/FragTrap.cpp \
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