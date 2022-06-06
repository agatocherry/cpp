#include "animals.hpp"

wrongAnimal::wrongAnimal()
{
	this->_type = "Animal";
	std::cout << "New Animal" << std::endl;
}

wrongAnimal::~wrongAnimal()
{
	std::cout << "Bye Animal" << std::endl;
}

void wrongAnimal::makeSound() const
{
	std::cout << "The Animal makes a sound" << std::endl;
}

std::string wrongAnimal::getType() const
{
	return (this->_type);
}

wrongDog::wrongDog()
{
	std::cout << "New Dog" << std::endl;
}

wrongDog::~wrongDog()
{
	std::cout << "Bye Dog" << std::endl;
}

void wrongDog::makeSound() const
{
	std::cout << "Ouaf" << std::endl;
}

wrongCat::wrongCat()
{
	std::cout << "New Cat" << std::endl;
}

wrongCat::~wrongCat()
{
	std::cout << "Bye Cat" << std::endl;
}

void wrongCat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
