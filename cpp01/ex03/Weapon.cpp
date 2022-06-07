#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string& Weapon::getType()
{
	return (this->_type);
}

#endif