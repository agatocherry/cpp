#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class	wrongAnimal
{
	protected :
		std::string _type;
	public :
		wrongAnimal();
		~wrongAnimal();
		virtual void		makeSound() const;
		std::string	getType() const;
};

class	wrongDog : virtual public wrongAnimal
{
	public :
		wrongDog();
		~wrongDog();
		virtual void	makeSound() const;
};

class	wrongCat : virtual public wrongAnimal
{
	public :
		wrongCat();
		~wrongCat();
		virtual void makeSound() const;
};

#endif