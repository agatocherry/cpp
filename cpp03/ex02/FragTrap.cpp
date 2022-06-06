#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Hello FragTrap !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "I will miss you, FragTrap" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "High fives guys ?!" << std::endl;
}