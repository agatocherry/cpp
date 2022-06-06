#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "New ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Bye ScavTrap" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout  << this->_name << " have enterred in Gate keeper mode." << std::endl;
}