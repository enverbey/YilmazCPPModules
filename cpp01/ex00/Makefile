NAME	=	myZombies

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	./src/Main.cpp \
			./src/newZombie.cpp \
			./src/randomChump.cpp \
			./src/Zombie.cpp \

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