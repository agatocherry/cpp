#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << "> " << "is delete." << std::endl;
}