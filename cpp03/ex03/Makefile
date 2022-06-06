# Variables

NAME	=	DiamondTrap
CC		=	c++
CFLAGS	=	-Werror -Wall -Wextra -g -c -Wshadow -Wno-shadow
SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
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