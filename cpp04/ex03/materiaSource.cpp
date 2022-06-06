#include "main.hpp"

MateriaSource::MateriaSource()
	: IMateriaSource()
{
	int	i = 0;
	while (i <= 4)
	{
		this->materiaArray[i] = NULL;
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	int	i = 0;
	while (i < 4)
	{
		delete this->materiaArray[i];
		i++;
	}
}

void IMateriaSource::learnMateria(AMateria *newAMateria)
{
	AMateria *copyAMateria;
	int i = 0;
	while (this->materiaArray[i] != NULL)
		i++;
	copyAMateria = newAMateria;
	this->materiaArray[i] = copyAMateria;
}

void MateriaSource::learnMateria(AMateria *newAMateria)
{
	IMateriaSource::learnMateria(newAMateria);
}

AMateria* IMateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
	{
		AMateria *newAMateria = new Ice();
		return (newAMateria);
	}
	if (type == "cure")
	{
		AMateria *newAMateria = new Cure();
		return (newAMateria);
	}
	return (0);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	return (IMateriaSource::createMateria(type));
}