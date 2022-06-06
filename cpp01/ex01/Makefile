# Variables

NAME	=	zombie
CC		=	c++
CFLAGS	=	-Werror -Wall -Wextra -g -c -std=c++98
SRCS	=	main.cpp Zombie.cpp ZombieHorde.cpp
OBJ		=	$(SRCS:.c=.o)

# Rules

all: $(NAME)

$(NAME):	$(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "Compiling $(NAME) done"

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ $<

fclean:
	@rm -rf $(NAME)
	@echo "! Removed $(NAME)"

re: fclean all