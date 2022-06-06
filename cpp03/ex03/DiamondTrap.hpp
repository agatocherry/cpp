#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private :
		std::string _name;
	public :
		DiamondTrap(std::string name);
		~DiamondTrap();
		void whoAmI();
		void attack(std::string const & target);
};

#endif