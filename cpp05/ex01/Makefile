NAME	=	form

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	./src/Bureaucrat.cpp \
			./src/Form.cpp \
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

run: all 
	./$(NAME);

.PHONY: all clean fclean re run