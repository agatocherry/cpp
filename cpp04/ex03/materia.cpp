#include "main.hpp"

AMateria::AMateria(std::string const & type)
{
	this->setType(type);
}

AMateria::~AMateria()
{

}

void	AMateria::setType(std::string type)
{
	this->_type = type;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

Ice::Ice()
	: AMateria("ice")
{
}

Ice::~Ice()
{
}

AMateria* AMateria::clone() const
{
	AMateria *newAMateria;
	newAMateria->setType(this->getType());
	return (newAMateria);
}

AMateria* Ice::clone() const
{
	return (AMateria::clone());
}

Cure::Cure()
	: AMateria("cure")
{
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return (AMateria::clone());
}

void AMateria::use(ICharacter& target)
{
	if (getType() == "ice")
		std::cout << "* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
	if (getType() == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
}

AMateria::AMateria()
{
}