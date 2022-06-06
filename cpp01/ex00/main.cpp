#include "Zombie.hpp"

int	main(void)
{
	Zombie	*clone;
	clone = newZombie("Zombie A");
	clone->announce();
	delete(clone);

	randomChump("Zombie B");
	return (0);
}