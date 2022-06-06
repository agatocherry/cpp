#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << "> " << "is delete." << std::endl;
}

/*
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
*/