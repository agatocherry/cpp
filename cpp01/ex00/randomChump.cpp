#include "Zombie.hpp"

void Zombie::nameChump(std::string name)
{
	this->_name = name;
}

void randomChump( std::string name )
{
	Zombie clone;

	clone.nameChump(name);
	clone.announce();
}