#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: FragTrap(name), ScavTrap(name), ClapTrap(name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap up" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap down" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name : " << this->_name << ", ClapTrap name : " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}