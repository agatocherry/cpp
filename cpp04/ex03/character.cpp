#include "main.hpp"

Character::Character(std::string const & name)
{
	ICharacter::setName(name);
	int 	i = 0;
	while (i < 4)
	{
		this->materiaArray[i] = NULL;
		i++;
	}
}

Character::~Character()
{
	int	i = 0;
	while (i < 4)
	{
		delete this->materiaArray[i];
		i++;
	}
}

void ICharacter::setName(std::string const & name)
{
	this->_name = name;
}

std::string const & ICharacter::getName() const
{
	return (this->_name);
}

std::string const & Character::getName() const
{
	return (ICharacter::getName());
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (this->materiaArray[i] != NULL)
		i++;
	if (i < 4)
	{
		this->materiaArray[i] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->materiaArray[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->materiaArray[idx] != NULL)
		{
			this->materiaArray[idx]->use(target);
		}
	}
}
