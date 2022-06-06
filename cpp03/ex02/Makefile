# Variables

NAME	=	FragTrap
CC		=	c++
CFLAGS	=	-Werror -Wall -Wextra -g -c
SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
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