#include "Zombie.hpp"

void Zombie::nameZombie(std::string name)
{
	this->_name = name;
}

Zombie* newZombie( std::string name )
{
	Zombie* clone = new Zombie;
	clone->nameZombie(name);
	return (clone);
}
