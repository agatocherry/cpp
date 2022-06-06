#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = name;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout
	<< this->_name << " attack " << target
	<< ", causing " << this->_attackDamage << " points of damage!"
	<< std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout
	<< this->_name << " take " << amount << " points of damage!"
	<< std::endl;
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " are dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > amount)
	{
		this->_energyPoints -= amount;
		this->_hitPoints += amount;
		std::cout
		<< this->_name << " was repaired by " << amount << " points!"
		<< std::endl;
		return ;
	}
	std::cout << this->_name << " don’t have any energy" << std::endl;
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}

int ClapTrap::getHitPoints()
{
	return (this->_hitPoints);
}