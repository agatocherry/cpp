#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <string>
#include <iostream>
#include "wrongAnimal.hpp"

class	Animal
{
	protected :
		std::string _type;
	public :
		Animal();
		~Animal();
		virtual void		makeSound() const;
		std::string	getType() const;
};

class	Dog : virtual public Animal
{
	public :
		Dog();
		~Dog();
		virtual void	makeSound() const;
};

class	Cat : virtual public Animal
{
	public :
		Cat();
		~Cat();
		virtual void makeSound() const;
};

#endif