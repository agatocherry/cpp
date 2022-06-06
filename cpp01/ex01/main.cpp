#include "Zombie.hpp"

int	main(void)
{
	Zombie *clone;
	int	N = 5;
	int	i = 0;

	clone = zombieHorde(N, "Horde");
	while (i < N)
	{
		clone[i].announce();
		i++;
	}
	delete [] clone;
	return (0);
}