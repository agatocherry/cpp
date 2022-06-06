#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "HumanA.hpp"

class HumanB 
{
	public:
	HumanB(std::string name);
	~HumanB(void);
	void setWeapon(Weapon & weapon);
	void attack(void);
	private:
	std::string name;
	std::string *weaponType;
	Weapon *weapon;
};

#endif