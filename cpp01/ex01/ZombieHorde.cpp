#include "Zombie.hpp"

void Zombie::nameZombie(std::string name)
{
	this->_name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *clone = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		clone[i].nameZombie(name);
		i++;
	}
	return (clone);
}