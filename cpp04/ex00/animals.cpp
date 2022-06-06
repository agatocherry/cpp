#include "animals.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "New Animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Bye Animal" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "The animal makes a sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "New Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Bye Dog" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf" << std::endl;
}

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "New Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Bye Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
