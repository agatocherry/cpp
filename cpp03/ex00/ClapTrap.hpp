#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	private :
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
	public :
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		int	getHitPoints();
};

#endif