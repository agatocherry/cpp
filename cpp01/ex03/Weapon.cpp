#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
	this->setType(newType);
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}

const std::string& Weapon::getType()
{
	return (this->type);
}

#endif