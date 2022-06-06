#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <string>
#include <iostream>
#include "brain.hpp"

class	Animal
{
	protected :
		std::string _type;
	public :
		Animal();
		virtual ~Animal();
		virtual void		makeSound() const;
		std::string	getType() const;
};

class	Dog : virtual public Animal
{
	private :
		brain *_brain;
	public :
		Dog();
		virtual ~Dog();
		virtual void	makeSound() const;
};

class	Cat : virtual public Animal
{
	private :
		brain *_brain;
	public :
		Cat();
		virtual ~Cat();
		virtual void makeSound() const;
};

#endif